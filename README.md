
# AutoStylePlugin (Adobe InDesign SDK – C++ Plugin)

## 📌 Overview
**AutoStylePlugin** is a cross-platform Adobe InDesign plugin written in **C++** using the **InDesign SDK**.  
It introduces a simple but extensible feature under **Edit → Auto Style**, which automatically applies a predefined text style (font, size, and color) to selected text.  

This project demonstrates:
- Practical usage of the **InDesign SDK**
- **Object-oriented design principles** in C++
- **Cross-platform plugin development** (Windows & macOS)
- Debugging, logging, and modular plugin architecture

---

## ✨ Features
- One-click **Auto Style** command inside InDesign.
- Applies the following preset:
  - **Font**: Arial  
  - **Size**: 14 pt  
  - **Color**: Black
- **Cross-platform ready** (Windows + macOS).
- Extensible design → can easily add multiple style presets in the future.
- Built-in **debug logging** for development and troubleshooting.

---

## 📂 Project Structure
```
AutoStylePlugin/
├── src/
│   ├── PluginMain.cpp               # Plugin entry point
│   ├── AutoStyleActionComponent.h/.cpp  # Handles menu action
│   ├── TextStylePreset.h/.cpp       # Encapsulates style settings
│   └── DebugLogger.h                # Debugging utility
├── resources/
│   └── AutoStyleMenu.rsrc           # Menu resource definition
├── README.md
├── LICENSE
└── .gitignore
```

---

## ⚙️ Setup & Build Instructions

### Prerequisites
- Adobe InDesign + InDesign SDK (matching version)
- C++ compiler:
  - Windows: Visual Studio or MinGW
  - macOS: Xcode
- (Optional) **CMake** for build automation

### Build Steps
1. Clone this repository:
   ```bash
   git clone https://github.com/Vigneshkalvium/AutoStylePlugin_cpp.git
   ```
2. Open project in your preferred IDE (or use CMake).
3. Configure the **InDesign SDK path** in your project settings.
4. Build the plugin → outputs:
   - **Windows**: `.plugin`
   - **macOS**: `.pluginbundle`
5. Copy the built plugin into InDesign’s **Plugins folder**.
6. Restart InDesign.

---

## 🚀 Usage
1. Launch Adobe InDesign with the plugin installed.
2. Select any text in your document.
3. Go to **Edit → Auto Style**.
4. The selected text will be automatically styled (Arial, 14pt, Black).

---

## 🔧 Future Improvements
- Add **multiple style presets** with a user selection dialog.
- Create a **UI panel** for custom style configuration.
- Save/load user preferences.
- Add automated tests for style application.

---

## 📚 Skills Demonstrated
- Advanced **C++ programming** (OOP, modular design).
- **Cross-platform plugin development** (Windows & macOS).
- Debugging & problem-solving (via custom logger).
- Familiarity with **Adobe InDesign SDK**.
- Writing clean, extensible, and team-friendly code.
- 
---

⚡ *This project was created as a practical demonstration of my ability to work with the Adobe InDesign SDK in C++ and aligns with the requirements of the InDesign SDK Developer Intern role.*  

