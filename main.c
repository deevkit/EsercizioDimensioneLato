#include <stdio.h>
#include <math.h>

int main() {

    // Dichiarazione delle variabili (Lato, Perimetro, Area)
    float l, P, A;

    // INPUT
    printf("Inserisci la dimensione del lato: ");
    scanf("%f", &l);

    // CALCOLI
    P = 3 * l;
    A = (l * l * sqrt(3)) / 4;

    // OUTPUT
    printf("Perimetro = %.2f\n", P);
    printf("Area = %.2f\n", A);

    return 0;
}