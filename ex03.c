#include <stdio.h>

int main() 
{
    int eta;

    
    printf("Inserisci la tua età: ");
    scanf("%d", &eta);

    
    if (eta >= 18)
    {
        printf("Sei maggiorenne.\n");
    } 
    else 
    {
        printf("Sei minorenne.\n");
    }

    
}
