#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, i, Tam;
    char placa[100];

    scanf("%d", &R);

    for (i = 0; i < R; i++){
        scanf("%s", placa);

        Tam = strlen(placa);

        if (Tam == 8){
            switch(placa[7]){
            case '1' : printf("MONDAY\n");
            break;
            case '2' : printf("MONDAY\n");
            break;
            }
            switch(placa[7]){
            case '3' : printf("TUESDAY\n");
            break;
            case '4' : printf("TUESDAY\n");
            break;
            }
            switch(placa[7]){
            case '5' : printf("WEDNESDAY\n");
            break;
            case '6' : printf("WEDNESDAY\n");
            break;
            }
            switch(placa[7]){
            case '7' : printf("THURSDAY\n");
            break;
            case '8' : printf("THURSDAY\n");
            break;
            }
            switch(placa[7]){
            case '9' : printf("FRIDAY\n");
            break;
            case '0' : printf("FRIDAY\n");
            break;
            }
        }
        else {
            printf("FAILURE\n");
        }
    }
    return 0;
}
