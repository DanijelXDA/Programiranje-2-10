#include <stdio.h>

int main(void)

{
  int i, n, j,p;

  float broj , a[50];

  do{
     printf("\nUnesite broj elemenata u nizu(max =50):");
     scanf("%d", &n);
     }while((n<1)||(n>50));
     printf("Unesite brojeve:");
     for(i=0;i<n;i++)
     {
       printf("\n a[%2d]= ");
       scanf("%d", &a[i]);
 }
   printf("\n\nUnesite broj koji zelite da umetnete:");
   scanf("%d", &broj);

   printf("\nUnesite indeks gde zelite da umetnete broj");
   scanf("%d", &j);

   for(i=1;i<n;i++)
   for(j=i-1;j>=0  &&a[j]> a[j+1]; j--){

   p=a[j];
   a[j]=a[j+1];
   a[j+1]=p;
   }
   return 0;
   }
