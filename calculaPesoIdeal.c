#include <stdio.h>
int main(){
double altura;
double pesoIdeal;
printf("Digite sua altura: \n");
scanf("%lf", &altura);
pesoIdeal = 72.7*altura - 58;

printf("Seu peso ideal e %lf", pesoIdeal);

return 0;

}