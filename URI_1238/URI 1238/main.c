#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, Tam1, Tam2, Tam3;
    char Palavra[51], Palavra2[51], Final[51];

    scanf("%d", &N);

    for (i = 1; i <=N; i++){
        scanf("%s %s", Palavra, Palavra2);

        Tam1 = strlen(Palavra);
        Tam2 = strlen(Palavra2);

        if (Tam1 < Tam2){
            Tam3 = Tam2;
        } else {
            Tam3 = Tam1;
        }

        for (j = 0; j < Tam3; j++){
            if (j < Tam1){
                printf("%c", Palavra[j]);
            }
            if (j < Tam2){
                printf("%c", Palavra2[j]);
            }
            }
        printf("\n");
        }
    return 0;
}
