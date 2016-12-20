#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Cisla(int *klad, int *zap, float *prum);
int MaN(int *m, int *n, int *s);
void Prohod(int *m, int *n);
int Bezb(int *m, int *n, int b, int *soucet, int *soucin);
int Deleni(int a, int b, float *rdeleni, int *deleni);

int main(int argc, char *argv[])
{
    int *n, i, cs=0, a1, a, b, c, d, *klad, *zap, *m, *s=0, *soucet, *soucin, *deleni;
    float *x, *y, v=0, *prum, *rdeleni;

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

    if((klad=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((zap=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((prum=(float*)malloc(sizeof(float)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }



    printf("Pocet zadanych cisel: %d\n", Cisla(klad, zap, prum));

    printf("Pocet kladnych: %d , Pocet zapornych: %d , Prumer: %0.2f\n", *klad, *zap, *prum);
    free(klad);
    free(zap);
    free(prum);
    klad=NULL;
    zap=NULL;
    prum=NULL;


    //5
    if((s=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((m=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((n=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }


    printf("Zadej m:\n");
    scanf("%d", m);
    printf("Zadej n:\n");
    scanf("%d", n);
    if(*m>*n)
        {
        Prohod(m, n);
        printf("m nyni: %d , n nyni %d\n", *m, *n);
    }

    printf("Pocet cisel: %d, ", MaN(m, n, s));
    printf("Soucet: %d\n", *s);

    free(m);
    free(n);
    free(s);
    m=NULL;
    n=NULL;
    s=NULL;

    //6

    if((m=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((n=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((soucet=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((soucin=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }

    printf("Zadej m:\n");
    scanf("%d", m);
    printf("Zadej n:\n");
    scanf("%d", n);
    printf("Zadej b:\n");
    scanf("%d", &b);

    if(*m>*n)
        {
        Prohod(m, n);
        printf("m nyni: %d , n nyni %d\n", *m, *n);
    }

    printf("Pocet cisel: %d , ", Bezb(m, n, b, soucet, soucin));
    printf("Soucet: %d , Soucin: %d\n\n", *soucet, *soucin);

    free(m);
    free(n);
    free(soucet);
    free(soucin);
    m=NULL;
    n=NULL;
    soucet=NULL;
    soucin=NULL;

    //7

    if((rdeleni=(float*)malloc(sizeof(float)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }
    if((deleni=(int*)malloc(sizeof(int)))==NULL)
        {
         printf("Nedostatek pameti");
         return -1;
    }

    printf("Zdej a\n");
    scanf("%d", &a);
    printf("Zadej b:\n");
    scanf("%d", &b);

    printf("Zbytek: %d, ", Deleni(a, b, rdeleni, deleni));
    printf("Celociselne deleni: %d , Realne deleni: %0.2f\n", *deleni, *rdeleni);

    free(rdeleni);
    free(deleni);
    rdeleni=NULL;
    deleni=NULL;

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


int MaN(int *m, int *n, int *s)
{
    int i, p=0;
    *s=0;
    for(i=*m;i<=*n;i++)
        {
        (*s)=(*s)+i;
        p++;
    }
    return p;
}

void Prohod(int *m, int *n)
{
    int pom=0;
    pom=(*m);
    (*m)=(*n);
    (*n)=pom;
}

int Bezb(int *m, int *n, int b, int *soucet, int *soucin)
{
    int i, p=0;

    *soucet=0;
    *soucin=1;

    for(i=*m;i<=*n;i++)
        {
        if(i%b!=0)
            {
            *soucet = *soucet+i;
            *soucin = *soucin*i;
            p++;
        }
    }
    return p;
}

int Deleni(int a, int b, float *rdeleni, int *deleni)
{
    *rdeleni=a/(float)b;
    *deleni=a/b;
    return a%b;
}
