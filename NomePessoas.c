#include <stdio.h>
#include <stdlib.h>
//Crie um algoritmo que leia o nome e a idade de 5 pessoas,
//armazenando em vetores.

// Liste o nome e a idade de cada pessoa.
int main()
{

char nomes [5][150];
int idade[5];
int i;

for (i=0; i < 5; i++)
{
printf("Digite o Nome: %d \n" , i +1);
gets (nomes[i]);

fflush(stdin);

printf("Digite sua idade : \n" );
scanf("%d",&idade[i]);

fflush(stdin);
}

for ( i = 0; i < 5; i++)
{


printf("%dº nome: %s \n", i + 1, nomes[i]);
}
return 0;


}
