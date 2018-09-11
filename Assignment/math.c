#include "math.h"

/*NOTES:
 * Written By: Brian Harlow
 * Date: 09/10/2018
 * Function Operations:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
 *
 * All variable types are integers, so any operation will always exclude a decimal value if a decimal would otherwise be calculated.
 * This applies to the division and modulus cases. No decimal will be returned, only the integer preceding it. For example, if you were to divide
 * 5 by 4, the calculated value is 1.25, but the function does not report decimals so it would return 1.
 *
 * Every operation follows the format of "num1" "Operator" "num2." This is important for the subtraction, division, modulus, and bit shift cases.
 *
 * The Bitwise Inverse Case will only return the bitwise inverse of the num1 input. The num2 input does not matter for this case selection.
 *
 * The character variable Operator will only accept the following characters: +, -, *, /, %, <, >, &, |, ^, and ~. Any other input will yield a return of 0.
 *
 *  */

int math(int num1, int num2, char Operator)
{
    switch(Operator)
    {
    case '+':                   // Addition Case
        return num1 + num2;
    case '-':                   // Subtraction Case
        return num1 - num2;
    case '*':                   // Multiplication Case
        return num1 * num2;
    case '/':                   // Division Case
        return num1 / num2;
    case '%':                   // Modulus Case
        return num1 % num2;
    case '<':                   // Bit Shift Left Case
        return num1 << num2;
    case '>':                   // Bit Shift Right Case
        return num1 >> num2;
    case '&':                   // Bitwise AND Case
        return num1 & num2;
    case '|':                   // Bitwise OR Case
        return num1 | num2;
    case '^':                   // Bitwise XOR Case
        return num1 ^ num2;
    case '~':                   // Bitwise Inverse Case
        return ~num1;
    default:
        return 0;
    }
}
