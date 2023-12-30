#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kt_sochinhphuong(int p)
{
    if(sqrt(p)%10==0)
        return 1;
    else
        return 0;
}