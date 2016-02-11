/* 
 * File:   literal.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:14 PM
 */

#ifndef LITERAL_H
#define	LITERAL_H

class Literal: public Operand
{
public:
    Literal(int value)
    {
        this->value = value;
    }
    double evaluate()
    {
        return value;
    }
private:
    int value;
};

#endif	/* LITERAL_H */

