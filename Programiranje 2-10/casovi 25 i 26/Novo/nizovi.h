#ifndef _NIZOVIH_
#define _NIZOVIH_
#include <stdio.h>
int odredin(void)
{
int k;
do{
printf("\n\nUesite broj elementa u nizu(<=%d):", MAX);
scanf("%d", &k);
}while(k<1 || k>MAX);
return k;
}
void ducitaj(double a[],int n, int k, int i)
{
printf("\nUnesite index broja:\n");
scanf("%d",&k);
for(i=k;i<n-1;i++)
a[i]=a[i+1];
n--;
}
return;
}
double *dmax(double a[], int n)
{
double *p, *mx;
for(p=a+1;p<a+n;p++)
if(*p>*mx)
mx=p;
return mx;
}
void dispisi(double a[], int n)
{
int i;
for(i=0;i<n;i+)
printf("\n a[%2d]=%15,4%d",i,a[i]);
printf("\n\n");
returnn;
}
#endif
