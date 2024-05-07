#include <stdio.h>

int main() 
{
    float a, b, c;

    
    printf("Inserisci la lunghezza del primo lato: ");
    scanf("%f", &a);
    printf("Inserisci la lunghezza del secondo lato: ");
    scanf("%f", &b);
    printf("Inserisci la lunghezza del terzo lato: ");
    scanf("%f", &c);

   
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        printf("I tre numeri possono essere le lunghezze dei lati di un triangolo.\n");

      
        if (a == b && b == c) {
            printf("Il triangolo è equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Il triangolo è isoscele.\n");
        } else {
            printf("Il triangolo è scaleno.\n");
        }
    } else {
        printf("I tre numeri non possono essere le lunghezze dei lati di un triangolo.\n");
    }

    
}

