/*Faça uma função que receba três notas de um aluno com parâmetros e uma letra. Se a letra for A, o procedimento calcula 
a média das notas do aluno, se for P, o procedimento calcula a média ponderada com pesos 5, 3 e 2. A média calculada deve ser
devolvida ao programa principal para, então, ser mostrada*/
#include <stdio.h>
float media(float n1, float n2, float n3, char tipo)
{   
    float med=0;
    if ((tipo=='A')||(tipo=='a'))
        med=(n1+n2+n3)/3;
    else if 
    ((tipo=='P')||(tipo=='p'))
        med=((n1*5)+(n2*3)+(n3*2))/10;
    return med;
}

int main()
{
    float m, n1, n2, n3;
    char tipo;
        printf("Informe o procedimento: 'A' Calcula a média ou 'P' Calcula a média ponderada\n");
        scanf("%c", &tipo);
        printf("Informe as três notas:\n");
        scanf("%f %f %f", &n1,&n2,&n3);
    m=media(n1,n2,n3,tipo);
        printf ("Média %f", m);
        return 0;
}