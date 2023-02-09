#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <math.h>
#include <string>
#include "read.hpp"



using namespace std;

int main()
{
    string membernames;
    //create array of strings
    string fullTeam[4];
    //call the function from read.cpp to read each of the members names
    membernames = readReadMe();
    //print out each members name in the array
    cout << membernames << " "  << endl;

    return 0;
}