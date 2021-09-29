
#include <stdio.h>

int suma(int a, int b);

int main(void)
{
    int i;
    int j;
    int result;
    printf("Introduce el primer número\n");
    scanf("%d",&i); //lo mandamos a la direccion de i
    printf("Introduce el segundo número\n");
    scanf("%d",&j); //lo mandamos a la direccion de j


    result = suma(i,j);
    printf("El resultado es %d\n",result);
}

int suma(int a, int b){
    int c;
    c= a+b;
    return c;
    
}
