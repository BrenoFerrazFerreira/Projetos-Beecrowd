#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor [100];
    int i;

    for (i = 0; i <= 99; i++){
        scanf("%lf", &vetor[i]);
    }
    for (i = 0; i <= 99; i++){
        if (vetor[i] <= 10.0){
            printf("A[%d] = %.1lf\n",i, vetor[i]);
        }
    }
    return 0;
}
