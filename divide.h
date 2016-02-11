/* 
 * File:   divide.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:49 PM
 */

#ifndef DIVIDE_H
#define	DIVIDE_H

class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
       return left->evaluate() / right->evaluate();
    }
};

#endif	/* DIVIDE_H */

