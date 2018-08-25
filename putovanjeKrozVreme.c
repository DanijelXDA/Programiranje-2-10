#include <stdio.h>

int main ()
{
  int x1, y1, z1, Q, x2, y2, z2;

  scanf ("%d %d %d", &x1, &y1, &z1);
  scanf ("%d", &Q);
  scanf ("%d %d %d", &x2, &y2, &z2);

  int p, q, r;
  
  // Pretvaranje sekundi u sate, minute i sekunde
  p = Q / 3600;
  q = (Q - p * 3600) / 60;
  r = Q - (q * 60 + p * 3600);
  // KRAJ KONVERZIJE U HH:MM:SS format
  
  
  x1 = (x1 + x2 + p); // Sabiramo sate sa satima
  y1 = (y1 + y2 + q); // Sabiramo minute sa minutima
  z1 = (z1 + z2 + r); // Sabiramo sekunde sa sekundama

  int brojac;

  do
    {
      if (x1 > 23) // Broj sati ne može biti veći od 24
	{
	  x1 -= 24;
	  brojac = 1; // Promena je izvršena
	}
      else
	brojac = 0; // Sati su u redu, ne treba ih menjati, u opsegu su

      if (y1 > 59) // Broj minuta ne može biti veći od 59
	{
	  y1 -= 60; // Redukovanje broja minuta
	  x1++;     // 1 sat ima 60 minuta, pa minute koje smo oduzeli dodajemo na sate (x1)
	  brojac = 1; // Promena je izvršena, idi dalje
	}
      else
	brojac = 0;

      if (z1 > 59) // Broj sekundi ne može biti veći od 60
	{
	  z1 -= 60; // Smanji broj sekundi
	  y1++;     // 1 minut ima 60 sekundi, pa oduzetih 60 sekundi pretvaramo u 1 minut koj
	            // koji dodajemo na minute (y1)
	  brojac = 1; // Promena je izvršena, idi dalje
	}
      else
	brojac = 0;
    }
  while (brojac != 0); // Ako nije izvršena nijedna promena prekini rad petlje

  printf ("\n\n%d %d %d", x1, y1, z1); // Ispiši sate minute i sekunde kao rezultat

  return 0;
}
