/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int a, b, r, p, q;
    
    scanf("%d %d", &a, &b);
    
    p=a;
    q=b;
    
    while(1){
        r = a%b;
        a = b;
        b = r;
        if(r==0){
            break;
        }
    }
    
    printf("%d\n%d", a, p*q/a);

    return 0;
}