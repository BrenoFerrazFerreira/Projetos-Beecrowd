#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, qtd_peoes = 0, qtd_cavalos = 0, qtd_torres = 0, qtd_bispos = 0, qtd_reis = 0, qtd_rainhas= 0;
    int TAB[8][8]={
                {6, 0, 0, 5, 0, 0, 1, 0},
                {0, 1, 0, 2, 0, 3, 0, 2},
                {0, 1, 1, 1, 0, 1, 0, 0},
                {0, 0, 2, 0, 3, 4, 4, 3},
                {1, 0, 1, 1, 0, 1, 0, 0},
                {0, 0, 1, 3, 0, 4, 0, 1},
                {1, 0, 0, 0, 2, 2, 2, 1},
                {1, 5, 0, 6, 0, 1, 1, 0}
    };

    for (i >= 0; i <= 7; i++){
        for (j >=0; j <= 7; j++){
            switch(TAB[8][8]){
                case 1:
                    qtd_peoes = 1;
                break;

                case 2:
                    qtd_cavalos = 1;
                break;

                case 3:
                    qtd_torres = 1;
                break;

                case 4:
                    qtd_bispos = 1;
                break;

                case 5:
                    qtd_reis = 1;
                break;

                case 6:
                    qtd_rainhas = 1;
                break;
            }
            }
        }

    printf("PEÕES:%d\nCAVALOS:%d\nTORRES:%d\nBISPOS:%d\nREIS:%d\nRAINHAS:%d", qtd_peoes, qtd_cavalos, qtd_torres, qtd_bispos, qtd_reis, qtd_rainhas);

    return 0;
}
