#include <stdio.h>
int main(){
    int anoNascimento, anoAtual, idade;
    anoNascimento = 0;
    anoAtual = 0;
    idade = 0;

    printf ("Digite o ano em que voce nasceu: \n");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);
    
    idade = anoAtual - anoNascimento;

    printf("Sua idade e  %d : \n", idade);


    system("pause");


}
