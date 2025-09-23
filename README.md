# ShadowOS-AI

**ShadowOS-AI** is a terminal-based virtual operating system simulator written in C, with plans for AI-powered command prediction using Python. It provides a lightweight, interactive shell environment where users can execute commands, play games, and access utility features.

---

## Project Overview

### Core System Files
- `shadow.c` → Main entry point of ShadowOS. Handles startup and calls the shell.
- `shell.c` & `shell.h` → Implements the terminal-like shell interface, command parsing, and command execution.

### Features Implemented
- Terminal shell with custom commands.
- `clear` command with system-specific behavior and fallback message.
- Games:
  - Number Guessing
  - Rock Paper Scissors
  - Word Scramble
- Calculator (basic arithmetic operations)
- To-Do List (interactive, step-by-step functionality)
- ASCII Art Drawer (predefined art for letters A-Z)

### Planned Features
- AI-powered command prediction using Python.
- Context-aware responses and small-talk personality for an interactive experience.

---

## Installation
1. Clone the repository:
```bash
git clone https://github.com/ParthMahajan1020/ShadowOS-AI.git


## Compilw the code with:
gcc shadow.c shell.c -o ShadowOS
./ShadowOS

