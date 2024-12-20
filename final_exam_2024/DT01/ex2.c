#include "ex2.h"

// Function check number is perfect square
bool isPerfectSquare(int num){
    if(num <= 1) return true;

    long long odd = 1;
    while (num > 0)
    {
        num -= odd;
        odd += 2;
    }

    return (num == 0);
}

// Function calculate sum of Digit n
int sumOfDigits(int num){
    return (num < 10) ? num : (num % 10) + sumOfDigits(num / 10);
}

// Driver code
int main(){
    
    // Input n < 20
    int n;
    do{
        scanf("%d", &n);
    }while(n < 20);

    // Print results
    isPerfectSquare(n) ? printf("Is Perfect Square \n") : printf("Not Perfect Square \n");
    printf("Sum of Digts n is : %d ", sumOfDigits(n));

    return 0;
}