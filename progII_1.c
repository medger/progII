/*Faça uma função que receba dois números positivos e retorne a soma dos N números inteiros existente entre eles.*/
#include <stdio.h>
int soma()
{
    int num1, num2, i, total=0;
    printf("Digite dois numeros:");
    scanf("%d %d", &num1, &num2);
    if (num1>=num2)
        printf("Intervalo inválido");
    else
    {
        for (i=num1+1;i<num2;i++)
            total=total+i;
    }
    return total;
}
int main()
{
    int resp;
    resp=soma();
    printf("Total=%d", resp);
    return 0;
}