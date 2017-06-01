/*
Escreva um programa que leia N valores reais quaisquer, 
determine qual o menor valor dentre os valores
*/

#include <stdio.h>

const int tam=5;

int main()
{
    int vet[tam], menor=-1;
    int i;
    
    for(i=0;i<tam;i++)
    {
        printf("Digite o %dº número\n", i+1);
        scanf("%d", &vet[tam]);
    }
    
    for(i=0;i<tam;i++)
    {
        if(vet[tam]<menor)
        menor=vet[tam];
    }

    printf("\nO menor nº é o %d", menor);    
        
    
return 0;
}