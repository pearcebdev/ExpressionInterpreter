/* 
 * File:   or.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 6:36 PM
 */

#ifndef OR_H
#define	OR_H

class Or: public SubExpression
{
public:
    Or(Expression* left, Expression* right):
        SubExpression(left, right)
    {
    }
    double evaluate()
    {
        if ( (left->evaluate() > 0) ) 
        {
            return 1;
        }
        else if ( (right->evaluate() > 0 ) )
        {
            return 1;
        }
        else
        {
            return 0;
        }
       
    }
};

#endif	/* OR_H */

