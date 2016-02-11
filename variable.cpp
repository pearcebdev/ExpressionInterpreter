/* 
 * File:   variable.cpp
 * Author: Angmar
 * 
 * Created on December 14, 2015, 3:12 PM
 */

#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

double Variable::evaluate()
{
    return symbolTable.lookUp(name);
}

