# Multi-Modal Manager (MMM)

## Overview
Multi-Modal Manager (MMM) is a Qt-based desktop application that provides multiple specialized dialog windows for different operations. The application features a main window interface that serves as a hub for accessing various functional modules through dedicated dialog windows.

## Features
- **Modular Design**
  - Main window hub interface
  - Multiple specialized dialog windows:
    - Edit Module
    - Select Module
    - Control Module
    - Operations Module
  - Clean separation of concerns

- **User Interface**
  - Modern Qt-based GUI
  - Consistent dialog-based interface
  - Parent-child window relationship
  - Modal and non-modal dialog support

- **Architecture**
  - Component-based design
  - Event-driven interaction
  - Memory-safe window management
  - Internationalization support

## Project Structure
```
mmm/
├── CMakeLists.txt          # Build configuration
├── main.cpp                # Application entry point
├── mainwindow.cpp/h/ui     # Main window implementation
├── edit.cpp/h/ui           # Edit dialog implementation
├── select.cpp/h/ui         # Select dialog implementation
├── control.cpp/h/ui        # Control dialog implementation
├── op.cpp/h/ui            # Operations dialog implementation
├── dialog.cpp/h/ui        # Base dialog implementation
└── mmm_en_GB.ts           # English translation file
```

## Technical Requirements
- Qt 5 or Qt 6
- C++17 compiler
- CMake 3.5 or higher

## Building the Project

### Prerequisites
- Qt development environment
- CMake build system
- C++17 compatible compiler

### Build Instructions

#### Windows
```bash
# Create build directory
mkdir build
cd build

# Configure with CMake
cmake ..

# Build
cmake --build .
```

#### Linux/macOS
```bash
# Create build directory
mkdir build && cd build

# Configure with CMake
cmake ..

# Build
make
```

## Development Guide

### Adding New Dialog Windows
1. Create new dialog files:
   ```bash
   newdialog.h
   newdialog.cpp
   newdialog.ui
   ```

2. Add to CMakeLists.txt:
   ```cmake
   qt_add_executable(mmm
       ...
       newdialog.h
       newdialog.cpp
       newdialog.ui
       ...
   )
   ```

3. Include in MainWindow:
   ```cpp
   #include "newdialog.h"
   ```

### Window Management
- Windows are created dynamically
- Parent-child relationships maintained
- Proper memory management through Qt's object tree
- Modal or non-modal dialog options

### Class Hierarchy
```
QMainWindow
└── MainWindow
    ├── QDialog
    │   ├── EditDialog
    │   ├── SelectDialog
    │   ├── ControlDialog
    │   └── OperationsDialog
    └── Dialog
```

## Usage

### Main Window
The main window provides access to all modules through dedicated buttons:
- Edit Button: Opens the Edit dialog
- Select Button: Opens the Select dialog
- Control Button: Opens the Control dialog
- Operations Button: Opens the Operations dialog

### Dialog Windows
Each dialog window is designed for specific functionality:
1. **Edit Dialog**
   - Data editing capabilities
   - Form-based interface

2. **Select Dialog**
   - Selection operations
   - List/tree views

3. **Control Dialog**
   - Control operations
   - System management

4. **Operations Dialog**
   - General operations
   - Task execution

## Internationalization
- Translation files in `mmm_en_GB.ts`
- Support for additional languages
- Qt Linguist integration

## Contributing
1. Fork the repository
2. Create a feature branch
3. Implement your changes
4. Submit a pull request

## Best Practices
- Follow Qt's memory management guidelines
- Use Qt's parent-child mechanism
- Implement proper dialog lifecycle management
- Maintain consistent UI/UX across dialogs

## Troubleshooting
- Window Creation Issues: Check parent-child relationships
- Build Errors: Verify Qt and CMake versions
- Runtime Errors: Check dialog initialization

## Acknowledgments
- Qt Framework
- CMake Build System
