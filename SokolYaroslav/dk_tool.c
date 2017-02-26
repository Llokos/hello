#include <stdio.h>
#include "dk_tool.h"

void printfmassiv (int razmer, int massive[razmer])
{
    for(int i=0;i<razmer;i++)
    {
        printf("%i ", massive[i]);
    }
    printf("\n");
}

void zmeshchenie(int razmer, int massive[razmer], int n, int newmassive[razmer])
{
/////////////////////////////////////esli n>razmer    
    int p=n/razmer;
    for(int f=0;f<p;f++)
    if (razmer<n)
    {
        n=n-razmer;
    }
/////////////////////////////////////zmeshchenie na n    
    int j=0;
    int k=0;
/////////////left    
    while(j<razmer-n)
    {
        k=j+n;
        newmassive[k]=massive[j];
        j++;
    }
    k=0;
///////////////////right
    while(j<razmer)
    {
        newmassive[k]=massive[j];
        j++;
        k++;
    }    
}
