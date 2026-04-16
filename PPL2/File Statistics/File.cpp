#include<iostream>
#include "File.h"
using namespace std;
#include<fstream>
#include<sstream>

void File::analyze(string filename)
{
    ifstream file(filename);
    string line;
    int lines=0,words=0,chars=0,sentences=0;
    while(getline(file,line))
    {
        lines++;
        chars+=line.length()+1; // +1 for newline character
        stringstream ss(line);
        string word;
        while(ss>>word)
            words++;
        for(char c:line)
            if(c=='.' || c=='!' || c=='?')
                sentences++;
    }
    cout << "number of lines : " << lines << endl;
    cout << "number of words: " << words << endl;
    cout << "number of characters: " << chars << endl;
    cout << "number of sentences: " << sentences << endl;
}

