#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Par;

    scanf("%d", &X);

    if (X > 0){

        if (X % 2 == 0){
            Par = X + 2;
        }
        else {
            Par = X + 1;
        }

        printf("%d\n", Par);
    }
    return 0;
}
