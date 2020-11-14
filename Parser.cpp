#include "Parser.h"
#include <iostream>

using namespace std;

// Opens input file/stream and gets ready to parse it
Parser::Parser(string infile_name) 
{
    infile.open(infile_name);
}

// Closes input file
void Parser::close()
{
    infile.close();
}

// Checks if there is more commands in input
bool Parser::hasMoreCommands()
{
    return not infile.eof();
}

// Reads next command and makes it the current command
void Parser::advance()
{
    getline(infile, current_command);
}

// Returns the command type of the current command
command Parser::commandType()
{
    return C_PUSH;
}

// Returns first argument of current command.
// Should not be called when command_type is C_RETURN
string Parser::arg1()
{
    return ".";
}

// Returns second argument of current command
// Should be called only if command_type is 
// C_PUSH, C_POP, C_FUNCTION, OR C_CALL.
int Parser::arg2()
{
    return -1;
}