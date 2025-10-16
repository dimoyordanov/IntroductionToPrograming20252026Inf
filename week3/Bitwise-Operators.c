#include <stdio.h>

int main() {
    unsigned int firstNumber = 5; // 8-bit binary representation:   0000 0101
    unsigned int secondNumber = 17; // 8-bit binary representation: 0001 0001

    printf("firstNumber = %u; secondNumber = %d\n", firstNumber, secondNumber);

    /* Truth table for every operation:
        | a | b | ~a | (a & b) | (a | b) | (a ^ b) |
        | 0 | 0 |  1 |    0    |    0    |    0    |
        | 0 | 1 |  1 |    0    |    1    |    1    |
        | 1 | 0 |  0 |    0    |    1    |    1    |
        | 1 | 1 |  0 |    1    |    1    |    0    |
    */

    /*  Bitwise NOT
        Takes a number and inverts all its bits.
        ~firstNumber -> 11111111111111111111111111111010 (unsgined int is 32 bits)
    */
    printf("~firstNumber = %u\n", ~firstNumber);


    /*  Bitwise AND
        Takes two numbers and does AND on each bit
        firstNumber & secondNumber = 00000001
    */
    printf("firstNumber & secondNumber = %u\n", firstNumber & secondNumber);

    
    /*  Bitwise OR
        Takes two numbers and does OR on each bit
        firstNumber | secondNumber = 00010101
    */
    printf("firstNumber | secondNumber = %u\n", firstNumber | secondNumber);

    
    /*  Bitwise XOR
        Takes two numbers and does XOR on each bit
        firstNumber ^ secondNumber = 00010100
    */
    printf("firstNumber ^ secondNumber = %u\n", firstNumber ^ secondNumber);

    
    /*  Left shift
        Takes two numbers (number and n) and shifts the bits of 'number' with 'n' places to the left
        firstNumber << 1 = 00001010
    */
    printf("firstNumber << 1 = %u\n", firstNumber << 1);

    
    /*  Right shift
        Takes two numbers (number and n) and shifts the bits of 'number' with 'n' places to the right
        firstNumber >> 1 = 00000010
    */
    printf("firstNumber >> 1 = %u\n", firstNumber >> 1);

    return 0;
}
