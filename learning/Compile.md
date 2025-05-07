## GNU Compiler (G++/GCC)
### Build Single CPP file
- g++ \<filename\>.cpp -o \<outputFile\> 

## Creating Executable
- There are two steps involved to create an Executable file that is Compiling and Linking
### Compiler Steps
- Source File (abc.cpp) --- Preprocessor ---> Preprocessed File (abc.cc) --- Compile -->  Assembly Code (abc.s) --- Assembler ---> Object File (abc.o)
### Linker
- Link all required object files and generate an Executable.
- ex: g++ abc.o xyz.o -o abc

### Disassemble
- objdump -D \<executable_file\>
