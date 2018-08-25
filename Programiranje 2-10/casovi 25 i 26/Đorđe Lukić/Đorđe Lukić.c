#include <stdio.h>         //Ðorðe Lukiæ//
#define MAX 50
void unosel(int [],int);
void prikaz(int [],int);
void pomul(int [], int);


int main(void)
{
  int i, n, a[MAX];
  do{
        printf("\nUnesite broj elemenata niza <(50): ");
            scanf("%d",&n);
    }while(n<0||n>MAX);


  printf("\nUnesite elemente niza:\n");
  unosel(a ,n);
  pomul(a,n);
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



void pomul(int a[], int n)
{
  int p,i;
  p = a[0];
  for(i=1; i<n; i++)
    a[i-1] = a[i];
    a[n-1] = p;

     return ;
}


