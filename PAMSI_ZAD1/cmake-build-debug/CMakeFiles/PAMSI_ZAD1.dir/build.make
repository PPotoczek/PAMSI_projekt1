# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Komputer\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Komputer\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Komputer\CLionProjects\PAMSI_ZAD1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\PAMSI_ZAD1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\PAMSI_ZAD1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\PAMSI_ZAD1.dir\flags.make

CMakeFiles\PAMSI_ZAD1.dir\main.cpp.obj: CMakeFiles\PAMSI_ZAD1.dir\flags.make
CMakeFiles\PAMSI_ZAD1.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PAMSI_ZAD1.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\PAMSI_ZAD1.dir\main.cpp.obj /FdCMakeFiles\PAMSI_ZAD1.dir\ /FS -c C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\main.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PAMSI_ZAD1.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\PAMSI_ZAD1.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\main.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PAMSI_ZAD1.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\PAMSI_ZAD1.dir\main.cpp.s /c C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\main.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.obj: CMakeFiles\PAMSI_ZAD1.dir\flags.make
CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.obj: ..\kolejka_prio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PAMSI_ZAD1.dir/kolejka_prio.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.obj /FdCMakeFiles\PAMSI_ZAD1.dir\ /FS -c C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\kolejka_prio.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PAMSI_ZAD1.dir/kolejka_prio.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\kolejka_prio.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PAMSI_ZAD1.dir/kolejka_prio.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.s /c C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\kolejka_prio.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.obj: CMakeFiles\PAMSI_ZAD1.dir\flags.make
CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.obj: ..\pakiet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PAMSI_ZAD1.dir/pakiet.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.obj /FdCMakeFiles\PAMSI_ZAD1.dir\ /FS -c C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\pakiet.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PAMSI_ZAD1.dir/pakiet.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\pakiet.cpp
<<

CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PAMSI_ZAD1.dir/pakiet.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.s /c C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\pakiet.cpp
<<

# Object files for target PAMSI_ZAD1
PAMSI_ZAD1_OBJECTS = \
"CMakeFiles\PAMSI_ZAD1.dir\main.cpp.obj" \
"CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.obj" \
"CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.obj"

# External object files for target PAMSI_ZAD1
PAMSI_ZAD1_EXTERNAL_OBJECTS =

PAMSI_ZAD1.exe: CMakeFiles\PAMSI_ZAD1.dir\main.cpp.obj
PAMSI_ZAD1.exe: CMakeFiles\PAMSI_ZAD1.dir\kolejka_prio.cpp.obj
PAMSI_ZAD1.exe: CMakeFiles\PAMSI_ZAD1.dir\pakiet.cpp.obj
PAMSI_ZAD1.exe: CMakeFiles\PAMSI_ZAD1.dir\build.make
PAMSI_ZAD1.exe: CMakeFiles\PAMSI_ZAD1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable PAMSI_ZAD1.exe"
	C:\Users\Komputer\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\PAMSI_ZAD1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\PAMSI_ZAD1.dir\objects1.rsp @<<
 /out:PAMSI_ZAD1.exe /implib:PAMSI_ZAD1.lib /pdb:C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug\PAMSI_ZAD1.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\PAMSI_ZAD1.dir\build: PAMSI_ZAD1.exe

.PHONY : CMakeFiles\PAMSI_ZAD1.dir\build

CMakeFiles\PAMSI_ZAD1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PAMSI_ZAD1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\PAMSI_ZAD1.dir\clean

CMakeFiles\PAMSI_ZAD1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Komputer\CLionProjects\PAMSI_ZAD1 C:\Users\Komputer\CLionProjects\PAMSI_ZAD1 C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug C:\Users\Komputer\CLionProjects\PAMSI_ZAD1\cmake-build-debug\CMakeFiles\PAMSI_ZAD1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\PAMSI_ZAD1.dir\depend

