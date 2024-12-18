#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(unsigned int num){

    int i;
    //Check if num < 1
    if(num <= 1) return false;

    if(num == 2 || num == 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;

    for(i = 5; i <= sqrt(num); i+=6)
        if (num % i == 0 || num % (i + 2) == 0) return false;

    return true;
}

void printBinary(unsigned int n){
    (n > 1) ? printBinary(n / 2) : 0;
    printf("%d",n % 2);
}
int main(){

    int n;
    do{
        printf("Input n (n > 0) : ");
        scanf("%d", &n);
    }while(n <= 0);

    printf("%d\n", isPrime(n)); // Return 1 if Prime and 0 not

    printBinary(n);

    return 0;

}