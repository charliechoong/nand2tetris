#include "CodeWriter.h"

using namespace std;

// Opens output file/stream and gets ready to write into it
CodeWriter::CodeWriter(string outfile) 
{
    ofstream out_file;
    out_file.open(outfile);
}

// Writes assembly code that implements given arithmetic command
void CodeWriter::writeArithmetic(string cmd)
{

}

// Writes assembly code that implements push/pop commands
void CodeWriter::writePushPop(string cmd)
{

}

// Closes output file
void CodeWriter::close() 
{
    outfile.close();
}

// Informs codeWriter that translation of a new VM file has started
void CodeWriter::setFileName(string filename)
{

}

// Writes the assembly instructions that effect the bootstrap code 
// that initializes VM. This code is places at start of generated
// *.asm file.
void CodeWriter::writeInit()
{

}

// Writes assembly code that effects `label` command
void writeLabel(string cmd);

// Writes assembly code that effects `goto` command
void writeGoto(string cmd);

// Writes assembly code that effects `if` command
void writeIf(string cmd);

// Writes assembly code that effects `function` command
void writeFunction(string cmd);

// Writes assembly code that effects `call` command
void writeCall(string cmd);

// Writes assembly code that effects `return` command
void writeReturn(string cmd);