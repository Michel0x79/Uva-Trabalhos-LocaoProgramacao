#include <stdio.h>
#include <stdlib.h>

int VerificaImparOuPar(int num)
{
    // caso o numero seja par, retorna 1
    if((num % 2) == 0){
        printf("\t'%d' numero par.\n", num);
        return 1;
    }
    // caso contrario retorna 0
    printf("\t'%d' numero impar.\n", num);
    return 0;
}

int main()
{
    int nInicial, nFinal, totalNumPar = 0;

    printf("Digite o numero inicial e o final.\nEx.: 1 10.\n=>");
    scanf("%d %d", &nInicial, &nFinal);
    
    // verifica se o numero inicial é maior que o final
    if(nInicial > nFinal){ 
        printf("O numero inicial deve ser menor que o final.");
        return 1;
    }

    for(int i = nInicial; i <= nFinal; i++)
    {
        // se a função retornar 1, incrementa a variavel
        if(VerificaImparOuPar(i) == 1) totalNumPar++; 
    }

    printf("[+] Total de numeros pares encontrados: %d", totalNumPar);
    return 0;
}