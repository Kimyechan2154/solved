/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long long A, B, V;
    
    scanf("%lld %lld %lld", &A, &B, &V);
    
    long long day = (V - B + (A - B - 1)) / (A - B); //A-B-1을 더해주건 나눴을때 올림이 되기 위함
    
    
    printf("%lld", day);
    
    return 0;
}