/*



# ShadowOS-AI — Project Overview


*Core System Files
--shadow.c → Main entry point of ShadowOS. Handles startup and calls the shell.
--shell.c & shell.h → Implements the terminal-like shell interface, command parsing, and command execution.


*Utilities & Modules
--utils.c & utils.h → General helper functions used across ShadowOS.
--time_module.c & time_module.h → Time/date-related operations (likely wrappers for system time).
--memory.c → Manages basic memory utilities for ShadowOS.
--scheduler.c → Handles task scheduling or process simulation.


*Applications / Features
--cal.c & cal.h → Calculator feature.
--Mensuration.c & Mensuration.h → Geometry/mensuration-related calculations.
--Units.c & Units.h → Unit conversion utilities.
--games.c & games.h → Wrapper/manager for inbuilt games.
--Number_Guess.c, Rock_Paper_Sci.c, Word_Scramble.c → Individual games implemented in C.


*AI & Python Integration
--ShadowBot.py → Python-based conversational chatbot with jokes, quotes, greetings, and interactive replies. Launched from ShadowOS via system("python ShadowBot.py");.
--inspiring_quotes.py → Module providing motivational quotes for ShadowBot.


*Executable
--shadowOS.exe → Compiled output of the main ShadowOS project for Windows.


*Other
--Project.c → Likely a testing or experimental driver file (not part of the main shell).
--pycache → Auto-generated Python bytecode cache.


In short:
👉 C side = Virtual OS shell, utilities, calculators, converters, games, task/memory management (no file system anymore).
👉 Python side = AI conversational bot (ShadowBot.py) with extra modules (inspiring_quotes).
👉 Integration = Shell launches apps (C or Python) on demand, simulating a tiny AI-powered operating system.



*/