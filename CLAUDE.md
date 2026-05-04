# Grayhound — Rainmeter Skin Package

## Project Overview

**Grayhound** is a Rainmeter skin package for Windows system resource monitoring. It provides a non-intrusive, grayscale-themed set of 131 individual skin variants across 13 monitoring categories. The design targets widescreen monitors with skins placed along screen edges.

- **Author**: George Lewe (george@lewe.com)
- **License**: Creative Commons BY-NC-SA 3.0
- **Current Version**: 5.6.1 (2024-06-29)
- **Documentation**: https://lewe.gitbook.io/rainmeter-skin-grayhound/
- **Copyright**: 2012–2024

---

## Repository Structure

```
rm-grayhound/
├── src/                        # All skin source files
│   ├── @Resources/             # Shared resources (included by all skins)
│   │   ├── Global.inc          # Master color/font/global variable definitions
│   │   ├── Normal.inc          # Canvas size: 248×44px, font size 8
│   │   ├── Medium.inc          # Canvas size: 320×50px, font size 10
│   │   ├── Large.inc           # Canvas size: 360×60px, font size 12
│   │   ├── HWiNFO.inc          # HWiNFO 7+ registry key mappings
│   │   ├── Fonts/Digit.ttf     # Custom font for Uptime skin
│   │   ├── Images/             # 17 PNG icon files
│   │   ├── Measures/           # 16 modular measure include files
│   │   └── Meters/             # 28 modular meter include files
│   ├── @Vault/Plugins/         # Embedded HWiNFO DLL plugins (32/64-bit, v3.2.0.0)
│   ├── AIO/                    # All-in-one liquid cooler skin
│   ├── CPU/                    # CPU monitoring (7 base variants)
│   ├── Disk/                   # Disk usage (27 variants: 1–4 drives, drives C–G)
│   ├── Fans/                   # Fan speed via HWiNFO
│   ├── GPU/                    # GPU monitoring (Standard + Compact)
│   ├── Memory/                 # RAM and SWAP monitoring
│   ├── Music/                  # Media player info (NowPlaying plugin)
│   ├── Network/                # Network speed (In+Out, In, Out)
│   ├── Processes/              # Top 8 processes
│   ├── RecycleBin/             # Recycle bin monitor
│   ├── Sidebars/               # Decorative sidebars
│   ├── Temperature/            # CPU/GPU/HDD temps via HWiNFO
│   └── Uptime/                 # System uptime display
├── rmskin/                     # Compiled .rmskin installer packages
│   └── Grayhound_5.6.1.rmskin  # Latest release
├── releaseinfo.txt             # Detailed version history and changelog
├── README.md                   # End-user documentation
└── LICENSE
```

---

## Skin Architecture

### Modular Include System

Every skin `.ini` file composes its behavior entirely from `@include` directives — there are no Lua scripts. The standard pattern used by all 131 skins:

```ini
[Variables]
@include=#@#Global.inc          ; global colors, fonts, options
@include2=#@#Normal.inc         ; OR Medium.inc OR Large.inc (size tier)
@include3=Variables.inc         ; skin-specific overrides

[Measures]
@include=#@#/Measures/Measures-Options.inc
@include2=#@#/Measures/[Category-Specific].inc

[Meters]
@include=#@#/Meters/Meters-Canvas.inc
@include2=#@#/Meters/[Category-Specific].inc
```

### Three Size Tiers

Every skin variant ships in three sizes that scale all dimensions proportionally:

| Size   | Canvas    | Font | Folder suffix |
|--------|-----------|------|---------------|
| Normal | 248×44 px | 8    | (none)        |
| Medium | 320×50 px | 10   | Medium        |
| Large  | 360×60 px | 12   | Large         |

### Hardware Data Sources

| Data type            | Source                            |
|----------------------|-----------------------------------|
| CPU, Memory, Network | Rainmeter built-in measures       |
| Disk space           | Registry / built-in               |
| GPU, Temp, Fans, AIO | HWiNFO 7+ via registry + DLL plugin |
| Music/media          | NowPlaying Rainmeter plugin       |
| Process list         | Registry query                    |

HWiNFO skins (Fans, Temperature, AIO, GPU advanced) **require HWiNFO 7.x** to be running with shared memory export enabled.

---

## Key Configuration Files

### `@Resources/Global.inc`

The single source of truth for the visual theme. Contains:
- Color palette variables (Blue, Green, Magenta, Pink, Red, White, Yellow)
- Transparency levels
- Font family (Tahoma)
- Icon visibility toggles
- Per-category accent colors (CPU, Disk, Network, GPU, Memory, etc.)
- Network speed limits (1000 Mbit down, 50 Mbit up — user-editable)
- HWiNFO global settings

**This is the primary file to edit when changing the skin's color scheme or global behavior.**

### `@Resources/HWiNFO.inc`

Maps HWiNFO 7+ registry paths to named variables for use in Temperature, Fans, GPU, and AIO skins. Update this file if HWiNFO registry indices change after a sensor layout update.

### Per-skin `Variables.inc`

Each skin subfolder has its own `Variables.inc` with local overrides:
- Icon position (`IconXPos=left` or `right`)
- Meter X position (`MeterXPos`)
- Bar colors and transparencies
- Core/drive captions and numbers
- Font color overrides

---

## Skin Categories and Counts

| Category     | Base variants | × Sizes | Total |
|--------------|--------------|---------|-------|
| CPU          | 7            | 3       | 21    |
| Disk         | 27           | 3       | 81    |
| Fans         | 1            | 3       | 3     |
| GPU          | 2            | 3       | 6     |
| Memory       | 5            | 3       | 15    |
| Music        | 1            | 3       | 3     |
| Network      | 3            | 3       | 9     |
| Processes    | 1            | 3       | 3     |
| RecycleBin   | 1            | 3       | 3     |
| Sidebars     | 3            | 3       | 9     |
| Temperature  | 1            | 3       | 3     |
| Uptime       | 1            | 3       | 3     |
| AIO          | 1            | 3       | 3     |
| **Total**    |              |         | **162** |

---

## Versioning and Releases

- **Scheme**: Semantic versioning (`MAJOR.MINOR.PATCH`)
- **Changelog**: `releaseinfo.txt` — organized by date, new features, improvements, bugfixes
- **Release artifacts**: `.rmskin` files in `/rmskin/` — these are ZIP-based Rainmeter installer packages
- **Naming**: `Grayhound_<version>.rmskin`

To build a new `.rmskin`, use the Rainmeter Skin Packager tool (part of Rainmeter installation). The source root for packaging is `src/`.

When bumping the version, update:
1. `releaseinfo.txt` — add new entry at the top
2. `README.md` — version references
3. `[Metadata]` section in all affected `.ini` files (or a global variable if one exists)

---

## Development Notes

### Adding a New Skin Variant

1. Copy an existing variant folder within the appropriate category.
2. Update `[Metadata]` (`Name`, `Information`).
3. Edit `Variables.inc` for the new variant's specifics.
4. If new measures are needed, add an include file under `@Resources/Measures/`.
5. If new meter layout is needed, add an include file under `@Resources/Meters/`.
6. Create all three size folders (Normal, Medium, Large) to maintain consistency.

### Adding a New Category

1. Create `src/<CategoryName>/` with subfolders for each size tier.
2. Add category-specific measure/meter include files to `@Resources/Measures/` and `@Resources/Meters/`.
3. Add a category color variable to `Global.inc`.
4. Add an icon PNG to `@Resources/Images/` if needed.

### Update Rates

- Most skins: `Update=1000` (1 second)
- Music skin: `Update=40` (~25 Hz for smooth animation)

### HWiNFO Registry Indices

HWiNFO assigns sensor indices dynamically. If hardware changes cause sensor mismatches, the user must update `@Resources/HWiNFO.inc` with correct registry indices from the HWiNFO application.

---

## File Conventions

- All skin files use Windows INI format (`.ini`)
- Include files use `.inc` extension
- Section headers follow Rainmeter conventions: `[Rainmeter]`, `[Metadata]`, `[Variables]`, `[MeasureName]`, `[MeterName]`
- Comments use `;` prefix
- File headers contain a metadata comment block with `@category`, `@package`, `@version`, `@date`, `@author`, `@copyright`, `@link`, `@license`
