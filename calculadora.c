#include <stdio.h>
#include <stdlib.h>

double RelizaOperacao(double n1,double n2, char operacao)
{
    switch (operacao)
    {
    case '+': return n1 + n2;
    case '-': return n1 - n2;
    case '*': return n1 * n2;
    case '/': 
        if(n2 == 0){
            printf("Divisao por 0 nao eh possivel... ");
            return 0;
        } 
        return n1 / n2;
    default:
        return 22;
    }
}

int main(){
    double num1 = 0, num2 = 0, resultado = 0;
    char op;
    int quit = 0;

    printf("Modo de uso da calculadora: valor operacao valor.\nEx.: 1 + 1 (digitar somente numeros (= )");
    do{
        printf("\n=> ");
        scanf("%lf %c %lf", &num1, &op, &num2);

        printf("\t%.2lf %c %.2lf = ",num1, op, num2);
        resultado = RelizaOperacao(num1, num2, op);
        printf("%.2lf\n",resultado);
        resultado = 0;
        num1 = 0;
        num2 = 0;    

    } while(quit != 1);

    return 0;
}