/* 
 * File:   main.cpp
 * Author: Angmar
 *
 * Created on December 14, 2015, 2:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"
#include <sstream>

SymbolTable symbolTable;

void parseAssignments();





int main(int argc, char** argv) {
    

    ifstream inFile;
    char inputFilename[] = "F:\\Documents\\project2input.txt";
    inFile.open(inputFilename, ios::in);

    if (!inFile) {
        cerr << "Can't open input file " << inputFilename << endl;
        exit(1);
    }
    Expression* expression;
    
    std::string token;
    std::istringstream line(token);
    char paren, comma;
    while(std::getline(inFile, token))
    {
        
        std::istringstream line(token);
        while(line >> token)
        {
            std::cout << "Token :" << token << std::endl;
            line >> paren;
            expression = SubExpression::parse();
            line >> comma;
            parseAssignments();
        }
    }
    
    
    cout << "Value = " << expression->evaluate() << endl;
    inFile.close();
    return 0;
}

void parseAssignments()
{
    char assignop, delimiter;
    string variable;
    double value;
    do
    {
        variable = parseName();
        cin >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}



