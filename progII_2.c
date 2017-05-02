/*Faça uma função que transforme e mostre segundos em horas, minutos e segundos*/
#include <stdio.h>
void converte ()
{
    int seg, h, m, s;
    printf("Digite os segundos");
    scanf("%d", &seg);
    
        h=seg/3600;
        m=(seg%3600)/60;
        s=(seg%3600)%60;
        
    printf("%d:%d:%ds", h,m,s);
}

int main()
{
    converte();
}