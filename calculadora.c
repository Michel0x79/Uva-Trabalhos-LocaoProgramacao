#include <stdio.h>
#include <stdlib.h>

double RelizaOperacao(double n1,double n2, char operacao)
{
    // De acordo com cada operacao solicitada, realiza o calculo e retorna o valor
    // adicionei uma validacao para caso o usuario digite uma operacao invalida
    switch (operacao)
    {
    case '+': return n1 + n2;
    case '-': return n1 - n2;
    case '*': return n1 * n2;
        case '/':  // adicionei o retorno -1 para caso a divisao seja por 0
        if(n2 == 0){
            printf("Divisao por 0 nao eh possivel... ");
            return -1;
        } 
        return n1 / n2;
    default:
        printf("Operacao invalida!");
        return 22;
    }
}

int main(){
    double num1 = 0, num2 = 0, resultado = 0;
    char op;

    // exibe o modo de uso da calculadora
    printf("[+] Modo de uso da calculadora: [valor] [operacao] [valor]\n- Ex.: 1 + 1 (digitar somente numeros (= )\n");
    printf("[-] Para sair, pressione CTRL + C.");
    do{
        printf("\n=> ");
        //Recebe os numeros e a operação do usário
        scanf("%lf %c %lf", &num1, &op, &num2);

        printf("\t%.2lf %c %.2lf = ",num1, op, num2);
        //reliza a operação e armazena em resultado
        resultado = RelizaOperacao(num1, num2, op);
        printf("%.2lf\n",resultado);

        //zera todas as variaveis de inicio
        resultado = 0;
        num1 = 0;
        num2 = 0;    

    } while(1);
    

    return 0;
}