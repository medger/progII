#include <stdio.h>
int num1, num2;
void main()
{
menu();
}

void menu(char resp)
{
char resp;
while(resp == 's'||'S')
{
  chamada();
  calcular();
  divisao();

  printf("Deseja continuar S/N\n");
  scanf("%c",&resp);
}

void chamada(int num1, int num2)
{
printf("Insira dois numeros");
scanf("%d %d", &num1, &num2);
}

void calcular(int num1, int num2, int soma)
{
soma = num1+num2; 
}

void divisao(int num1, int num2, int div)
{
div = num1/num2;
}

void imprimir(int soma, int div)
{
printf("Resultado Soma = %d\nResultado Divisao = %d\n", soma, div);
