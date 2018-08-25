#include <stdio.h>
void obrada(int*,int*)
int main(void)
{
    int a,b;
    a=4;
    b=6;

    printf("\n\nNa pocetku programa vrednosti su:\na=%d\nb=%d",a,b);
    printf("\nPozivam funkciju obrada");
    obrada(&a,&b);
    printf("\nVratili smo se iz funkcije obrada");
    printf("\n\n\Na kraju programa vrednosi su:\na=%d\nb=%d",a,b);

    return 0;


}
