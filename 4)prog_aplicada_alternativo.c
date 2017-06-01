#include <stdio.h>
#include <stdlib.h>
int soma (int a, int b);

//------------------------------------------
int main()
{
    int num1, num2;
    
        printf("Diga um nº\n");
        scanf("%d %d",&num1, &num2);     
    
  
    printf("\nA soma é %d", soma(num1, num2));
    
  return 0;
}

//------------------------------------------
int soma(int a, int b)
{
    return a+b;
}
