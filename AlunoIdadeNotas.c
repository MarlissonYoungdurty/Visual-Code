#include<stdio.h>
#include<stdlib.h>

//Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as três notas. Calcular a média anual do aluno. Caso a média do aluno seja menor que 7, o aluno está reprovado. 
//Imprimir: nome, idade, média e se está aprovado ou reprovado. 


int main()
{
int idade;
char nome[50];
float primeiraNota, segundaNota, terceiraNota, media;

printf("Digite o nome do Aluno: \n");
scanf("%s", &nome);

printf("Digite a Idade do Aluno: \n");
scanf("%i", &idade);

printf("Digite Primeira Nota: \n");
scanf("%f", &primeiraNota);

printf("Digite Segunda Nota: \n");
scanf("%f", &segundaNota);

printf("Digite Terceira Nota: \n");
scanf("%f", &terceiraNota);

media= (primeiraNota + segundaNota + terceiraNota)  / 3;

if (media >= 7) {
printf("Aprovado");

}else {
    printf("Reprovado");
}
return 0;
}