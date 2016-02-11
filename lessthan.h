/* 
 * File:   lessthan.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 5:22 PM
 */

#ifndef LESSTHAN_H
#define	LESSTHAN_H

class LessThan: public SubExpression
{
public:
    LessThan(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
        if ((left->evaluate() - right->evaluate()) > 0 )
        {
            return 0;
        }
        else
        {
            return 1;
        }
       
    }
};

#endif	/* LESSTHAN_H */

