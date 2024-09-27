#include <stdio.h>

int main(void)
{
   float prezzo, provvigione, prezzofinale;
   printf("inserisci il prezzo del biglietto:  ");
   scanf("%f", &prezzo);
   provvigione = (prezzo*15)/100;
   if (provvigione < 5) {
   provvigione = 5;
   }
   prezzofinale = provvigione + prezzo;
   printf("il prezzo finale e' %.2f$", prezzofinale);
   return 0;
}
