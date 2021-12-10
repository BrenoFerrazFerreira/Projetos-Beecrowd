#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Alt_Muro, Sobe, Desce, i, Soma;

    scanf("%d %d %d", &Alt_Muro, &Sobe, &Desce);

    for (i > 0; i < Alt_Muro; i++){
        if (Soma == Alt_Muro){
            printf("%d", Soma);
        }
        else {
            Soma = Alt_Muro - Sobe;
            Soma = Soma + Desce;
        }
    }
    printf("%d", Soma);
    return 0;
}
