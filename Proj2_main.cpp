#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int openMorseFile(){
    ifstream morseCodeFile ("morse.txt");
    string line;
    if (morseCodeFile.is_open())
    {
        while ( getline (morseCodeFile,line) )
        {
            cout << line << '\n';
        }
        morseCodeFile.close();
    }
}


int main() {
    openMorseFile();


    return 0;
}