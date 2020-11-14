#include <string>
#include <fstream>
using namespace std;

enum command
{
    C_ARITHMETIC,
    C_PUSH,
    C_POP,
    C_LABEL,
    C_GOTO,
    C_IF,
    C_FUNCTION,
    C_RETURN,
    C_CALL
};
class Parser
{
public:
    Parser(string infile);
    void close();
    bool hasMoreCommands();
    void advance();
    command commandType();
    string arg1();
    int arg2();
    ifstream infile;
    string current_command;
};
