/* 
 * File:   operand.h
 * Author: Angmar
 *
 * Created on December 14, 2015, 3:11 PM
 */

#ifndef OPERAND_H
#define	OPERAND_H

class Operand: public Expression
{
public:
    static Expression* parse();
};

#endif	/* OPERAND_H */

