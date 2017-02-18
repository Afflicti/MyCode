#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

void Generator(int generatedlevels[], int i)
{
    for(i=1;i<20;i++)
        {
        generatedlevels[i]=rand()%3+1;
    }
}

void Null()
{
    srand(time(NULL));
}

void ActuallLevelPrint(int generatedlevels[], int i)
{

    switch(generatedlevels[i])
        {
    case 1:
        {
        printf("\t---[]   \t\n");
    }break;
    case 2:
        {
        printf("\t   []   \t\n");
    }break;
    case 3:
        {
        printf("\t   []---\t\n");
    }break;
    }
}

void FirstLevelPrint(int generatedlevels[], int i)
{
    printf("\t   []   \t\t<---- Your actual position :)\n");
}

void First10LevelPrinter(int generatedlevels[], int i)
{

    FirstLevelPrint(generatedlevels, i);
    int j;
    for(j=1;j<10;j++)
        {
        ActuallLevelPrint(generatedlevels, i);
        i++;
    }
}

void LevelPrint(int generatedlevels[], int i, int positions[], int j)
{
    int actualllevel;
    char input;
    for(actualllevel=0;actualllevel<20;actualllevel++)
        {
        input = getch();
        if(input == 'x')
            {
            positions[j] = 3;
        }
        if(input == 'y')
            {
            positions[j] = 1;
        }
        printf("%d\t%d\n", i, j);
        if(generatedlevels[i] == positions[j])
            {
            printf("Konec :)");
            break;
        }
        j++;
        i++;
        ActuallLevelPrint(generatedlevels, i);
    }
}






