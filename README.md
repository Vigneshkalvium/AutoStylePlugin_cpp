# Auto Style Plugin for Adobe InDesign

## Overview

Auto Style Plugin is a cross-platform Adobe InDesign plugin developed in C++ using the InDesign SDK. It enables users to automatically apply predefined text styles (font, size, and color) to selected text with a single click from the "Edit > Auto Style" menu option. This project demonstrates strong command over C++, object-oriented programming, debugging, and plugin development with the InDesign SDK.

This plugin was developed as part of a portfolio to target the Adobe InDesign SDK Developer Internship at Inbetween Software Development Pvt Ltd, showcasing skills like cross-platform plugin development, debugging, and integration with complex SDKs.

---

## Features

- Apply a predefined text style (font: Arial, size: 14pt, color: Black) automatically to selected text.
- Simple menu integration under *Edit > Auto Style* in InDesign.
- Modular and extensible design supporting future addition of multiple style presets.
- Cross-platform compatibility (Windows and Mac).
- Built-in debug logging to trace operations during plugin execution.

---

## Technology Stack

- Language: C++
- Adobe InDesign SDK for plugin APIs
- Object-Oriented Programming principles: encapsulation, inheritance, polymorphism
- Cross-platform build system (CMake recommended)

---

## Project Structure

AutoStylePlugin/
├── src/ # Source code
│ ├── PluginMain.cpp
│ ├── AutoStyleActionComponent.h/.cpp
│ ├── TextStylePreset.h/.cpp
│ └── DebugLogger.h # Debug helper
├── resources/ # UI and menu resource files
│ └── AutoStyleMenu.rsrc
├── README.md
├── LICENSE
└── .gitignore


---

## Setup and Build Instructions

1. **Prerequisites:**
   - Adobe InDesign SDK installed (matching your InDesign version)
   - C++ compiler (Visual Studio for Windows, Xcode for Mac)
   - CMake (optional) or native build tools

2. **Configure:**
   - Set SDK path and environment variables as required by InDesign SDK

3. **Build:**
   - Use provided `CMakeLists.txt` or build scripts to compile the plugin on Windows or Mac.
   - Generates `.plugin` (Mac) or `.pluginbundle` (Windows) files for InDesign plugin deployment.

4. **Deploy:**
   - Copy the built plugin to InDesign's Plugins folder.
   - Restart Adobe InDesign.

5. **Use:**
   - Open or create a document in InDesign.
   - Select text.
   - From menu, choose *Edit > Auto Style*.
   - Selected text will receive the configured style automatically.

---

## How It Works

- The plugin listens for the "Auto Style" command from the menu.
- It retrieves the selected text range using InDesign SDK's selection interfaces.
- Applies the predefined text style (font, size, color) iteratively on the selected text.
- Uses OOP abstractions for maintainability and potential extensions.
- Debug logs output progress and errors for easy troubleshooting.

---

## Contribution and Customization

- Extend the `TextStylePreset` class to add more styles like Heading, Body, and Highlight.
- Enhance UI resource files to support multiple presets from the menu.
- Integrate advanced error handling and user notifications.
- Build tests for various InDesign versions and platforms.

---

## Why This Project

This plugin aligns precisely with the internship role at Inbetween Software Development Pvt Ltd, exemplifying:

- Strong knowledge of **C++ and OOP** concepts.
- Experience with **cross-platform plugin development** for Windows and Mac.
- Practical use of the **InDesign SDK** API interfaces.
- Ability to **debug and optimize** software.
- Clean and maintainable code ready for **team-based development** and code reviews.

---

## License

Include your preferred license here (e.g., MIT License).

---



