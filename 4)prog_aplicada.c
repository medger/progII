#include <stdio.h>
#include <stdlib.h>
int menor (int *vet);
const int tam=3;
//------------------------------------------
int main()
{
    int vetor[tam];
    int i;
    
    for(i=0;i<tam;i++)
    {
       printf("Diga um nº\n");
       scanf("%d",&vetor[i]);                  
    }
  
    printf("\nO menor nº é %d", menor(vetor));
    
  return 0;
}

//------------------------------------------
int menor (int *vet)
{
    int menor=99999, i;
        for(i=0;i<tam;i++)
        {
           if(vet[i]<menor)
           menor=vet[i];
        }
return menor;
}
