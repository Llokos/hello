#include <stdio.h> 
#include "dk_tool.h"
#include "dk_tool.c"

int main(void) 
{ 
//////////////////////////////////////////vvodim razmer massiva  
    int razmer = 0; //razmer massiva
    int n=0;    //zmeshchenie
    
    printf("Vvedite razmer massiva: ");
//////////proverka na bukvu

    if(scanf("%i", &razmer)!=1)
    {
        printf("Вы ввели букву!!!\n");
        return 0;
    }
//////////razmer massiva ne bolshe 100

    if(razmer>101)
    {
        printf("Введите меньше число!!!\n");
        return 0;
    }
////////////............... 
    int massive [razmer];
    int newmassive[razmer];
///////////////////////////////vvodim element massiva and proverka na bukvy
    for(int i=0; i<razmer; i++)
    {
        printf("Vvedite element massiva: ");
        {
            if(scanf("%i", &massive[i])!=1)
            {
            printf("Вы ввели букву!!!\n");
            return 0;
            }
        }
    }
///////////////////////////////////vvodim zmeshchenie    
    printf("Vvedite n:");
    scanf("%i", &n);
    
    printfmassiv (razmer, massive);     ///////pechataet massiv
    zmeshchenie(razmer,massive, n, newmassive);     //////zmeshchaet massiv
    printfmassiv (razmer, newmassive);      ///////pechataet newmassiv

}
