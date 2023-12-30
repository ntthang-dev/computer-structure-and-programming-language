/* --- HO CHI MINH UNIVERSITY OF TECHNOLOGY 2023-2024 ----
----------- EE2009_HK231_FINAL EXAM_GROUP 06-B -----------
-----------  NAME: NGUYEN TRONG THANG --------------------
----------- STUDENT CODE: 1915244 ------------------------
*/

#include "stdio.h"
#include "math.h"
#include <stdlib.h> // FIX
#define MAX_SIZE 100

// Driver Code
int main(){
    int n = 0;              //Init N = 0 
    int arr[MAX_SIZE];      //Init ARRAY ARR, MAX SIZE IS 100
    
    // Input n, if n>0 n > 100 input again
    do{
        scanf("%d",&n); 
    }while(n < 100 & n > 0);

    // Input Array arr[]
    for(int i = 0; i < n; i++){
        scanf("%d/n", arr[i]);
    }

    int max_abs = 0;        // Init Max Abs, GTTD lon nhat trong mang arr[] 
    find_max_abs(&arr, n, &max_ahbs);
    init_arr(&arr, n, max_abas);
    return 0;
}

// FUNCTION FIND MAX ABS - QUESTION 2.A1
void find_max_abs(int *arr[], int n, int *max_abs){
    
    // Neu tri tuyet doi phan tu arr[i+1] > arr[i] trong mang arr
    // thi gia tri max_abs bang arr[i+1] tra gia tri ve max_abs qua con tro
    for (int i = 0; i < n-1; i++){
        if(abs(arr[i+1] > abs(arr[i])))
            max_abs = abs(arr[i+1]);

        printf("%d/n", &max_abs);   // Display max_abs
    }
}

// FUNCTION INIT ARRAY ARR - QUESTION 2.A2]
void init_arr(int *arr[], int n, int max_abs){
    for(int i = 0; i < n; i++){
        arr[i] = arr[i]/max_abs;
        printf("%d", &arr[i]);
    }
}
