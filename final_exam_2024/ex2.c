#include <stdio.h>
#define MAX  100

void findMinMax(int arr[], int n, int *min, int *max){
    *min = *max = arr[0]; // Default min = max is value at index 0
    for (int i = 1; i < n; ++i){
        *max = (arr[i] > *max) ? arr[i] : *max;
        *min = (arr[i] < *min) ? arr[i] : *min;
    }
}
    
int main(){
    
    // Input n
    unsigned int n = 0;
    do{
        printf("INPUT SIZE OF ARRAY (N > 10) : ");
        scanf("%d", &n);
    }while (n <= 10);

    // Input array
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    
    // Find min, max
    int max, min;
    findMinMax(arr, n, &min, &max);
    printf("Min is: %d\n Max is : %d\n",min, max);

    return 0;
}