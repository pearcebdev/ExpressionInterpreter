/* 
 * File:   times.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:49 PM
 */

#ifndef TIMES_H
#define	TIMES_H

class Times: public SubExpression
{
public:
    Times(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
       return left->evaluate() * right->evaluate();
    }
};

#endif	/* TIMES_H */

