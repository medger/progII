/*Faça uma função que receba dois números positivos POR PARAMETRO e retorne a soma dos N números inteiros existente entre eles.*/

#include <stdio.h>
int soma (int A, int B)
{
    int i, total=0;
    if (A>=B)
        printf("Intervalo inválido");
    else
    {
        for (i=A+1;i<B;i++)
            total=total+i;
    }
return total;
}

int main()
{
    int A, B, resp;
    printf("Digite dois números");
    scanf("%d %d", &A, &B);
    
    resp=soma(A,B);
    printf("Total: %d", resp);
    return 0;
}