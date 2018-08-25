#include <stdio.h>

int zbir(int, int);


int main(void)
{   int a, b;
    printf("\n\nZbir je: %d", zbir(a,b));

    return 0;
}

int zbir(int a, int b)

{
    int  suma;

    printf("\n\nUnesite prvi broj: ");
    scanf("%d", &a);

    printf("\n\nUnesite drugi broj: ");
    scanf("%d", &b);

    suma = a + b;

    return suma;
}

