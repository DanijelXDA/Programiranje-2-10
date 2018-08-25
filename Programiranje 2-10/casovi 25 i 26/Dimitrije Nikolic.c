#include <stdio.h>

#define MAX 50

int odredin(void);
void ducitaj(double [], int);
void udesno(double [], int);


int main(void)
{
    int n, i;
    double a[MAX];

    n = odredin();
    ducitaj(a, n);
    udesno(a, n);

    return 0;

}

int odredin(void)
{
    int k;

    do{
        printf("\n\nUnesite broj elemenata u nizu (<=%d): ", MAX);
        scanf("%d", &k);
    }while(k<1 || k>MAX);

    return k;
}

void ducitaj(double a[], int n)
{
    int i;
    for(i=0; i<n; i++){
        printf("\na[%d] = ", i);
        scanf("%lf", a+i);
    }
    return;
}

void udesno(double a[], int n)
{
    int p, i;
    p =a[n-1];
    for(i=n-1; i>0; i--)
        a[i] = a[n-1];
        a[0] = p;

    return;
}







