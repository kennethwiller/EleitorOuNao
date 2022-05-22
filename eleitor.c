#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade;


    printf ("Informe a sua idade: ");
    scanf ("%i", &idade);

    if (idade < 16)
    {
        printf ("\nNao ELEITOR");
    }
    
    else if (idade >= 16 && idade < 18)
    {
        printf ("\nELEITOR FACULTATIVO");
    }

    else if (idade > 65) {
        printf ("\nELEITOR FACULTATIVO");
    }

    else if (idade >= 18 && idade <= 65) 
    {
        printf ("\nELEITOR OBRIGATORIO");
    }

    return 0;
}
