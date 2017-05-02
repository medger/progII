#include <stdio.h>
void converte (int seg)
{
    int h,m,s;
        h=seg/3600;
        m=(seg%3600)/60;
        s=(seg%3600)%60;
        
    printf("%d:%d:%ds", h,m,s);
}

int main()
{
    int seg;
    printf("Entre com os segundos");
    scanf("%d", &seg);
    
    converte(seg);
    return 0;
}