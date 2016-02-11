/* 
 * File:   subexpression.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:07 PM
 */

#ifndef SUBEXPRESSION_H
#define	SUBEXPRESSION_H

class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse();
    
protected:
    Expression* left;
    Expression* right;
};

#endif	/* SUBEXPRESSION_H */

