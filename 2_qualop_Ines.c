#include <stdio.h>

void menu(void);
void result(void);
void type2values(void);
void addsoma(void);
void split(void);

float num1, num2, divisao;
int soma;

int main()
{
    menu();
}

void menu(void)
{
	char continuar;
    do{
    	{
        type2values();
        addsoma();
        split();
        result();
        printf("Deseja continuar? S/N\n");
        scanf(" %c", &continuar);
    }
	}while(continuar=='s'||'S');
    
    
}

void type2values(void)
{
    printf("Insira dois numeros\n");
    scanf("%f %f", &num1, &num2);
}

void addsoma(void)
{
    soma=num1+num2;
}

void split(void)
{
    divisao=num1/num2;
}

void result(void)
{
    printf("\nO resultadao da soma e: %d", soma);
    printf("\nO resultado da divisão e: %.2f\n", divisao);
}