/* 
 * File:   parse.cpp
 * Author: Angmar
 * 
 * Created on December 14, 2015, 3:16 PM
 */

#include <cctype> 
#include <iostream> 
#include <string> 
using namespace std;

#include "parse.h"

string parseName()
{
    char alnum;
    string name = "";

    cin >> ws;
    while (isalnum(cin.peek()))
    {
        cin >> alnum;
        name += alnum;
    }
    return name;
}

