/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N;
    
    scanf("%d", &N);
    
    float Bestscore = 0, Score[N], Newscore =0;
    
    for(int i=0; i<N; i++){
        scanf("%f", &Score[i]);
        if(Bestscore<Score[i]){
            Bestscore = Score[i];
        }
    }
    for(int i=0; i<N; i++){
        Newscore += Score[i]/Bestscore*100;
    }
    
    
    printf("%f", Newscore/N);

    return 0;
}