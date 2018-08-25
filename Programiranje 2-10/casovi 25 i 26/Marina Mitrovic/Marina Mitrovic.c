#include <stdio.h>
#define MAX 30
int velicinaniza(int , int );
int elementiniza(int , int );
int main(void)
{
int n;
int a[MAX], *m,p
velicinaniza(MAX ,n);
elementiniza(*m ,a);

printf("\n\nPrikaz novonastalog niza:\n\n");
for(m=a; m<a+n; m++)
printf("%d\n", *m);

return 0;
}
int velicinaniza(a[MAX],n)
{
do{
printf("\nUnesite velicinu niza (max=%d):",MAX);
scanf("%d", &n;)
}while(n<1||n>MAX);
}
int elemenetiniza(*m,a)
{
printf("\n\nUnesi elemente niza:");
for(m=a; m=<a+n; m++)
scanf("%d", m);
}
p = *(a+n-1);
for(m=a+n-1; m>a; m--)
*m=*(m-1);
*a=*p;
}
