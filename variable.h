/* 
 * File:   variable.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:12 PM
 */

#ifndef VARIABLE_H
#define	VARIABLE_H

class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    double evaluate();
private:
    string name;
};

#endif	/* VARIABLE_H */

