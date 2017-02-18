#include <stdio.h>

#include "Fce.h"

int main(void)
{
    int generatedlevels[20] = {2}, i=1, positions[20] = {1}, j=1;

    Null();
    Generator(generatedlevels, i);
    First10LevelPrinter(generatedlevels, i);
    LevelPrint(generatedlevels, i, positions, j);

    for(i=0;i<20;i++)
        {
        printf("%d, ", generatedlevels[i]);
    }
    printf("\t");
    for(i=0;i<10;i++)
        {
        printf("%d , ", positions[i]);
    }





    return 0;
}

