#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "read_names.h"

using namespace std;

int main()
{
    //open file
    ifstream myfile;
    myfile.open("README.md",ios::in);
    //if file is open read names and print 
    if(myfile.is_open())
    {
        while(read_names())
        {
            cout << get_names();
        }
    }

    return 0;
}