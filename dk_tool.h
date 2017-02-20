#include <stdio.h>

void printfmassiv (int razmer, int massive[razmer])
{
    for(int i=0; i<razmer; i++)
    {
        printf("%i ", massive[i]);
    }
    printf("\n");
}

void zmeshchenie(int razmer, int massive[razmer], int n, int newmassive[razmer])
{
    for(int j=0; j<razmer; j++)
    {
        if(j<razmer-n+1)
        {
            newmassive[j+n-1]=massive[j];

        }
        else
        {
            newmassive[j+n-1-razmer]=massive[j];
        }
    }
}
