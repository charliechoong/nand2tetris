#include "CodeWriter.h"
#include "Parser.h"
#include <iostream>
using namespace std;

// input: filename.vm or directoryName
// output: filename.asm or directoryName.asm
int main(int argc, char *argv[])
{
    // If no argument is provided, exit program.
    if (argc <= 1) {
        cout << "Target program not provided!" << endl;
        exit(EXIT_FAILURE);
    }
    string infile_name;
    infile_name = argv[1];
    Parser parser = Parser(infile_name);
    
    // Create file output named
    int start_index, end_index;
    string outfile_name;
    end_index = infile_name.find_last_of(".vm") - 2;
    if ((start_index = infile_name.find_last_of("/")) == string::npos)
    {
        start_index = 0; 
    }
    outfile_name = infile_name.substr(0, end_index) + ".asm";
    cout << outfile_name << endl;

   CodeWriter writer(outfile_name);
    while (parser.hasMoreCommands())
    {
        cout << "exiting..." << endl;
        break;
    }
    parser.close();
    writer.close();
    // insert infinite loop
    //output_file << "(INF)" << endl;
    //output_file << "@INF" << endl;
    //output_file << "0;JMP" << endl;

}
