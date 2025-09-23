# ShadowOS-AI

**ShadowOS-AI** is a terminal-based virtual operating system simulator built in C, integrated with a Python-powered AI chatbot. It combines core OS-like utilities, calculators, converters, games, and task/memory management with a conversational AI, giving users a mini AI-powered OS experience.

---

## Features

### Core System
- **shadow.c**: Main entry point of ShadowOS. Handles startup and calls the shell.  
- **shell.c & shell.h**: Terminal-like shell interface for command parsing and execution.

### Utilities & Modules
- **utils.c & utils.h**: General helper functions used across ShadowOS.  
- **time_module.c & time_module.h**: Handles time and date-related operations.  
- **memory.c**: Basic memory utilities for ShadowOS.  
- **scheduler.c**: Task scheduling or process simulation.

### Applications / Features
- **cal.c & cal.h**: Calculator for arithmetic operations.  
- **Mensuration.c & Mensuration.h**: Geometry and mensuration calculations.  
- **Units.c & Units.h**: Unit conversion utilities.  
- **games.c & games.h**: Wrapper/manager for inbuilt games.  
- Individual games:
  - **Number_Guess.c**  
  - **Rock_Paper_Sci.c**  
  - **Word_Scramble.c**

### AI & Python Integration
- **ShadowBot.py**: Python-based AI chatbot for conversations, jokes, quotes, and greetings. Launched from ShadowOS using `system("python ShadowBot.py");`.  
- **inspiring_quotes.py**: Provides motivational quotes for ShadowBot.

### Executable
- **shadowOS.exe**: Compiled Windows executable of the ShadowOS-AI project.

### Other Files
- **Project.c**: Experimental or testing driver file.  
- **__pycache__**: Python bytecode cache.

---

## Project Highlights
- **C side**: Virtual OS shell with utilities, calculators, converters, games, and task/memory management.  
- **Python side**: AI conversational bot with motivational quotes.  
- **Integration**: The shell launches both C and Python applications on demand, simulating a lightweight AI-powered OS.

---

## Usage
1. Clone the repository:
   ```bash
   git clone <repository-url>


# Compile the c code
- gcc shadow.c shell.c utils.c time_module.c memory.c scheduler.c cal.c Mensuration.c Units.c games.c Number_Guess.c Rock_Paper_Sci.c Word_Scramble.c -o shadowOS.exe

# Run the exacutable
- ./shadowOS.exe