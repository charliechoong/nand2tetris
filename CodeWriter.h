#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class CodeWriter 
{
public:
    CodeWriter(string outfile);
    void writeArithmetic(string cmd);
    void writePushPop(string cmd);
    void close();

    void setFileName(string filename);
    void writeInit(); 
    void writeLabel(string cmd);
    void writeGoto(string cmd);
    void writeIf(string cmd);
    void writeFunction(string cmd);
    void writeCall(string cmd);
    void writeReturn(string cmd);
    
private:
    ofstream outfile;

};