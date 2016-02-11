/* 
 * File:   greaterthan.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 5:22 PM
 */

#ifndef GREATERTHAN_H
#define	GREATERTHAN_H

#include "expression.h"


class GreaterThan: public SubExpression
{
public:
    GreaterThan(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
        if ((left->evaluate() - right->evaluate()) > 0 )
        {
            return 1;
        }
        else
        {
            return 0;
        }
       
    }
};

#endif	/* GREATERTHAN_H */

