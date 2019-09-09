#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
   int i, nahodne_cislo, j;
   int generovane_cisla[20];
 
   srand( time( 0 ) ); 
 
   printf ("Generovane cisla su:  \n");
   for (i=1; i<=20; i++)
   {
      bool uz_existuje, susedia;
      do{
        uz_existuje = false;
        susedia = false;
        nahodne_cislo = rand()%20 + 1;
        if(i>1){
            for(j=0; j<i-1; j++){
                if( nahodne_cislo == generovane_cisla[j]){
                    uz_existuje = true;
                }
            }
            if(generovane_cisla[i-2] == (nahodne_cislo - 1) ||  generovane_cisla[i-2] == (nahodne_cislo + 1)){
                susedia = true;
            }
        }
      }while(uz_existuje || susedia);
      generovane_cisla[i-1]=nahodne_cislo;
      printf ("%d \n",nahodne_cislo);

   }
 
   return 0;
}

//Hehe ^^ been here, done that - P.K
