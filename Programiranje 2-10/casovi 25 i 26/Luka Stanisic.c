#include <stdio.h>
#define MAX 50
void unesi(int [],int);
void prikaz(int [],int);
void bubble(int [], int);
int main (void)
{
int i, n, a[MAX], k;
  do{
        printf("\nUnesite broj elemenata niza: ");
  scanf("%d",&n);
  }while(n<0||n>MAX);

  printf("\nUnesite elemente niza:\n");
  unesi (a,n);
  bubble(a,n);
  prikaz(a,n);
  return 0;

}
void unesi(int a[],int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    printf("\na[%d] = ",i);
    scanf("%d",&a[i]);
  }
  return ;
}
void prikaz(int a[],int n)
{
  int i;
  for(i=0; i<n; i++)
    printf("\na[%d]= %d\n",i, a[i]);

    return ;

}

void bubble(int a[], int n)
{
 int i, y, p;
 for(i=n-1; i>0; i--)
 for(y=0; y<i; y++)
     if(a[y]>a[y+1]){
        p = a[y];
        a[y] = a[y+1];
        a[y+1] = p;
     }
     return;
}

