/* 
 * File:   equals.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 5:23 PM
 */

#ifndef EQUALS_H
#define	EQUALS_H

class Equals: public SubExpression
{
public:
    Equals(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
        if (left->evaluate() == right->evaluate())
        {
            return 1;
        }
        else
        {
            return 0;
        }
       
    }
};

#endif	/* EQUALS_H */

