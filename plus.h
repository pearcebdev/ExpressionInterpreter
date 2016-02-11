/* 
 * File:   plus.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:10 PM
 */

#ifndef PLUS_H
#define	PLUS_H

class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
       return left->evaluate() + right->evaluate();
    }
};

#endif	/* PLUS_H */

