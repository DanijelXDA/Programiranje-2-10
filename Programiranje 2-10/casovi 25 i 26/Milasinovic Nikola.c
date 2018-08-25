#include <stdio.h>
#define MAX 50
void unosel(int [],int);
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
  unosel(a ,n);
  bubble(a, n);
  prikaz(a, n);
  return 0;

}
void unosel(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("\na[%d] = ",i);
    scanf("%d",&a[i]);
  }
  return ;
}
void prikaz(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
    printf("\na[%d]= %d\n",i, a[i]);

    return ;

}

void bubble(int a[], int n)
{
 int i, j, pom;
 for(i=n-1;i>0;i--)
 for(j=0;j<i;j++)
     if(a[j]>a[j+1]){
        pom = a[j];
        a[j] = a[j+1];
        a[j+1] = pom;
     }
     return;
}

