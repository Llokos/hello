#include <stdio.h> 
#include "dk_tool.h"

int main(void) 
{ 
    int razmer = 0;
    int n=0;
    printf("Vvedite razmer massiva: \n");
    scanf("%i", &razmer);
    int massive [razmer];
    int newmassive[razmer];
    
    for(int i=0; i<razmer; i++)
    {
        printf("Vvedite element massiva: \n");
        {
            scanf("%i", &massive[i]);
        }
    }
    printf("Vvedite n:");
    scanf("%i", &n);
    

    
    printfmassiv (razmer, massive);
    zmeshchenie(razmer,massive, n, newmassive);
    printfmassiv (razmer, newmassive);

}
