#include <stdio.h>
int main(){

    //declarando as variáveis
    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;


    //entrada e saída de dados para obter o primeiro número
    printf("****Calculadora Simples com as 4 operacoes basicas**** \n");
    printf("Digite o primeiro numero: \n");
    scanf("%f", &numero1);

    //entrada e saída de dados para obter o segundo número
    printf("Digite o segundo numero: \n");
    scanf("%f",&numero2);

    //inserindo as 4 operações basicas por meio das variáveis que foram declaradas
    soma =  numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;



    printf("Primeiro Numero escolhido: %.2f \n",numero1);
    printf("Segundo Numero escolhido: %.2f \n", numero2);
    printf("A soma entre os dois numeros escolhidos e = %.2f \n", soma);
    printf("A subtracao entre os dois numeros escolhidos e = %.2f \n",subtracao);
    printf("A multiplicacao entre os dois numeros escolhidos e = %.2f \n", multiplicacao);
    printf("A divisao entre os dois numeros escolhidos e = %.2f \n", divisao);

    system("pause");

    return 0;
}