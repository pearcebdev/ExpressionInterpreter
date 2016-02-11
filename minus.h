/* 
 * File:   minus.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:49 PM
 */

#ifndef MINUS_H
#define	MINUS_H

class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right):
        SubExpression(left,right)
    {
        
    }   
    double evaluate()
    {
        return left->evaluate() - right->evaluate();
    }
};

#endif	/* MINUS_H */

