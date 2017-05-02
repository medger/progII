#include <stdio.h>
void inverte (int *a, int tam)
{
    int i, temp, j;
    for (i=0;i<tam/2;i++)
    {
        temp=a[i];
        a[i]=a[(tam-1)-i];
        a[(tam-1)-i] = temp;
    }
}
int main()
{
    int vetor[6];
    int i, numero=1;
    
    for (i=0;i<6;i++)
    {
        printf("Digite %d número de 6\n", numero++);
        scanf("%d", &vetor[i]);
    }
inverte(vetor,6);

    for (i=0;i<6;i++)
        printf("\n%d", vetor[i]);
}

/*
int main()
{
    int a[i], tam=0, resp;
    printf("Insira 1 número de 1 a 6");
    scanf("%d", a[i]);
    
    resp=inverte(&a, tam);
    
    printf("%d, ",resp);
    
return 0;
}
*/