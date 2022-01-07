/* C program for decimal to binary conversion */

#include "decimal_to_binary.h"

// Function to return the binary
// equivalent of decimal value N
int decimalToBinary(int N)
{
    // To store the binary number
    ull B_number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    }
    return B_number;
}