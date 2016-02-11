/* 
 * File:   and.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 6:36 PM
 */

#ifndef AND_H
#define	AND_H

class And: public SubExpression
{
public:
    And(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
        if ( (left->evaluate() > 0) && (right->evaluate() > 0) )
        {
            return 1;
        }
        else
        {
            return 0;
        }
       
    }
};

#endif	/* AND_H */

