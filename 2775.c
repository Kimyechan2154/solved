/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int T, K, N;
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
    scanf("%d %d", &K, &N);  
    
    int people[15][15] = {0}; //14층 14호까지 만들고 초기화
    
    for(int i=1; i<=N; i++){
        people[0][i] = i; //0층 i로 초기화
    }
    
    for(int i=1; i<=K; i++){
        for(int j=1; j <= N; j++){
            people[i][j] = people[i][j-1] + people[i-1][j]; // 모든 식에 값을 매기기
        }
    }
        printf("%d\n", people[K][N]);

    }

    return 0;
}