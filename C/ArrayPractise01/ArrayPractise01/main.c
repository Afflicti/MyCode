#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int Ukol1[10], x, s=0, i;
    srand(time(NULL));

    /*1.	Načtěte a vytiskněte jednorozměrné pole 10 celých čísel z intervalu <1,10>.
     Zjistěte průměrnou hodnotu v poli a vytiskněte ji na dvě desetinná místa.*/

    printf("Cisla v poli: ");
    for(i=0;i<10;i++)
        {
        x = rand()%10+1;
        Ukol1[i] = x;
        s=s+x;
        printf("%d, ", Ukol1[i]);
    }
    printf("\nPrumer: %0.2f\n\n", s/(float)i);

    /*2. Mějte pole celých čísel o 11 prvcích. Naplňte pole náhodnými hodnotami z intervalu <1;11>.
     Proveďte záměnu hodnot prvků pole tak, že do
     1. prvku zapíšete hodnotu 11. prvku, do 2. prvku hodnotu 10. prvku, až do 11. prvku hodnotu 1. prvku.
     Vypište obsah pole před a po transformaci.*/


    return 0;
}

