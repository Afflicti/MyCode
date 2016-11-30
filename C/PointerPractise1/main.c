#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Cisla(int *klad, int *zap, float *prum);

int main(int argc, char *argv[])
{
    int *n, i, cs=0, a1, a, b, c, d, *klad, *zap;
    float *x, *y, v=0, *prum;

    if((n=(int*)malloc(sizeof(int)))==NULL)
        {
        printf("Nedostatek pameti");
        return -1;
    }

    if((x=(float*)malloc(sizeof(float)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }


    printf("Zadej cele cislo n\n");
    scanf("%d", n);
    printf("Zadej realnecislo x\n");
    scanf("%f", x);

    for(i=1;i<=*n;i++)
        {
        v=v+(i/((*x)+i));
    }
    printf("Vysledek: %0.2f  :)\n\n", v);

    free(n);
    free(x);
    n=NULL;
    x=NULL;

    //1

    if((n=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }

    printf("Zadej cele cislo n:\n");
    scanf("%d", n);
    printf("V dekadicke: %d V hexadecimalni: %x V oktalove: %o\n", *n, *n, *n);
    if(*n>=50 && *n<100)
        {
        printf("Cislo je z intervalu <50;100)\n");
    }
    a1=*n;
    do
        {
        //1234 %10=4 1234/10 = 123
        cs=cs+a1%10; //cs+=a%10;
        a1=a1/10; //a/=10;
    }while(a1>0);

    printf("Ciferny soucet: %d\n\n", cs);

    free(n);
    n=NULL;

    //2
    if((x=(float*)malloc(sizeof(float)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((y=(float*)malloc(sizeof(float)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    printf("Zadej realne cislo x\n");
    scanf("%f", x);
    printf("Zadej realne cislo y\n");
    scanf("%f", y);
    if(*x>*y)
        {
        printf("Cislo %f je vetsi\n", *x);
    }
    else if(*y>*x)
        {
        printf("Cislo %f je vetsi\n", *y);
    }
    else
        {
        printf("Cisla jsou stejna\n");
    }

    printf("Vetsi je %f\n\n", (*x>*y)?*x :*y );

    free(x);
    free(y);
    y=NULL;
    x=NULL;

    //3

    v=0;
    printf("Zadejte a\n");
    scanf("%d", &a);
    printf("Zadejte b\n");
    scanf("%d", &b);
    printf("Zadejte c\n");
    scanf("%d", &c);

    d=b*b-4*a*c;
    if(d<0)
        {
        printf("Rovnice nema reseni.\n\n");
    }
    else if(d==0)
        {
        if((x=(float*)malloc(sizeof(float)))==NULL)
            {
             printf("Nedostatek pameti");
             return -1;
        }
        *x=-b/(float)(2*a);
        printf("Vysledek: %f\n\n", *x);
        free(x);
        x=NULL;
    }
    else
        {
        if((x=(float*)malloc(sizeof(float)))==NULL)
            {
             printf("Nedostatek pameti");
             return -1;
        }
        if((y=(float*)malloc(sizeof(float)))==NULL)
            {
             printf("Nedostatek pameti");
             return -1;
        }
        *x=(-b+sqrt(d))/(2*a);
        *y=(-b-sqrt(d))/(2*a);
        printf("Vysledky: %0.2f, %0.2f\n\n", *x, *y);
        free(x);
        free(y);
        y=NULL;
        x=NULL;
    }

    //4

    klad=(int*)malloc(sizeof(int));

    printf("Pocet zadanych cisel: %d\n", Cisla(&klad, &zap, &prum));

    a=&klad;

    printf("Pocet kladnych: %d", a);

    return 0;
}

//------------------------------------------------
int Cisla(int *klad, int *zap, float *prum)
{
    int a, i=0, s=0;

    *klad=0;
    *zap=0;

    printf("Zadavej cisla. 0 ukoncis zadavani\n");
    do
    {
        scanf("%d", &a);
        if(a>0)
            {
            (*klad)++;
        }
        if(a<0)
            {
            (*zap)++;
        }
        if(a!=0)
            {
            i++;
            s=s+a;
        }
    }while(a!=0);
    (*prum)=s/i;
    return i;
}
