#include <stdio.h>
#include <stdlib.h>

void Cifry(int x, int *soucet1, int *pocet1);
int Sude(int x2, int *soucet2, int *pocet2);
void Rozdel(float a, int *cela, float *des);
void Prevod(int cas, int *h, int *m, int *s);

int main(int argc, char *argv[])
{
    /*1.	void Cifry(int x, int *soucet, int *pocet)
    -	pro načtené číslo x vrací funkce jeho ciferný součet a počet cifer */

    int x1, soucet1, pocet1, x2, soucet2, pocet2, cela, cas, h, m, s;
    float a, des;

    printf("Zadejte cislo x:\n");
    scanf("%d", &x1);
    Cifry(x1, &soucet1, &pocet1);
    printf("Soucet: %d , Pocet: %d\n\n", soucet1, pocet1);


    /*2.	int Sude(int x, int *soucet, int *pocet)
    -	pro načtené číslo x vrací funkce jeho ciferný součet
    a počet cifer a samotná funkce bude vracet číslo 1, je-li x sudé číslo, jinak bude vracet číslo 0.*/

    printf("Zadejte cislo x:\n");
    scanf("%d", &x2);
    Sude(x2, &soucet2, &pocet2);
    if(Sude(x2, &soucet2, &pocet2)==1)
        {
        printf("Cislo je sude\n");
    }
    else
        {
        printf("Cislo je liche\n");
    }
    printf("Soucet: %d , Pocet: %d\n\n", soucet2, pocet2);

    /*3.	void Rozdel(float a, int *cela, float *des)
    -	rozdělí reálné číslo a na jeho celou a jeho desetinnou část, obě čísla vrátí.*/

    printf("Zadej cislo a:\n");
    scanf("%f", &a);
    Rozdel(a, &cela, &des);
    printf("Cela cast: %d , Desetina cast: %0.2f\n\n", cela, des);

   /* 4.	void Prevod(int cas, int *h, int *m, int *s)
    -	převede zadaný čas v sekundách na hodiny, minuty a sekundy*/

    printf("Zadejte cas v sekundach:");
    scanf("%d", &cas);
    Prevod(cas, &h, &m, &s);
    printf("h: %d , m: %d , s: %d\n\n", h, m, s);

    return 0;
}
//------------------------------------------------------------------------
void Cifry(int x1, int *soucet1, int *pocet1)
{
    *soucet1=0;
    *pocet1=0;
    do{
        *soucet1 = *soucet1 + (x1%10);
        x1=x1/10;
        (*pocet1)++;

    }while(x1!=0);

}

int Sude(int x2, int *soucet2, int *pocet2)
{
    int a;
    a=x2;
    *soucet2=0;
    *pocet2=0;
    do{
        *soucet2 = *soucet2 + (x2%10);
        x2=x2/10;
        (*pocet2)++;

    }while(x2!=0);
    if(a%2==0)
        {
        return 1;
    }
    else
        {
        return 0;
    }
}

void Rozdel(float a, int *cela, float *des)
{
    *cela = 0;
    *des = 0;
    *cela = a/1;
    *des = a - *cela;
}

void Prevod(int cas, int *h, int *m, int *s)
{
    *s=cas%60;
    *m=cas/60;
    *h=*m/60;
    *m=*m%60;
}
