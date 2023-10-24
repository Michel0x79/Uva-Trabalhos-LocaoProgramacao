#include <stdio.h>

int main(int argc, char const *argv[])
{
    int linha =3, coluna = 3;
    int matriz[linha][coluna];
    const int multiplicador = 5;

    for(int l = 0; l < linha; l++){
        printf("Digite os valores da linha %d:\n", l + 1);
        for (int c = 0; c < coluna; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
    printf("\n [+] Valores da Matriz multiplicados por %d [+]\n", multiplicador);
    for(int l = 0; l < linha; l++){
        // printf("%d", matriz[]);
        for (int c = 0; c < coluna; c++) {
            // scanf("%d", &matriz[l][c]);
            printf("[ %d ]", matriz[l][c] * 5);
        }
        printf("\n");
    }

    return 0;
}
