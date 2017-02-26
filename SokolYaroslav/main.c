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

    if(razmer>100||razmer<=0)
    {
        printf("Введите размер от 1 до 100!!!\n");
        return 0;
    }
////////////............... 
    int massive [razmer];
    int newmassive[razmer];
///////////////////////////////vvodim element massiva and proverka na bukvy
    for(int i=0; i<razmer; i++)
    {
        printf("Vvedite element massiva: ");
        if(scanf("%i", &massive[i])!=1)
        {
            printf("Вы ввели букву!!!\n");
            return 0;
        }
        if(massive[i]>1000||massive[i]<-1000)
        {
            printf("Введите другой массив!!!\n");
            return 0;
        }
    }

///////////////////////////////////vvodim zmeshchenie    
    printf("Vvedite n:");

    if(scanf("%i", &n)!=1)
    {
        printf("Вы ввели букву!!!\n");
        return 0;
    }
    if(n>1000||n<-1000)
    {
        printf("Введите n от -1000 до 1000!!!\n");
        return 0;
    }
    
    
    printfmassiv (razmer, massive);     ///////pechataet massiv
    zmeshchenie(razmer,massive, n, newmassive);     //////zmeshchaet massiv
    printfmassiv (razmer, newmassive);      ///////pechataet newmassiv

}
