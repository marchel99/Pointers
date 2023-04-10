#include <stdio.h>
float dodaj(float a, float b);
float odejmij(float a, float b);
float mnoz(float a, float b);
float dziel(float a, float b);




typedef float (*pf)(float, float); // typedef dla wskaźnika na funkcję

int main() {


    pf dzialania[4] = {dodaj, odejmij, mnoz, dziel}; // tablica wskaźników na funkcje
    


    printf("Wynik dzialania to: %f\n", dzialania[1](2, 3));




    return 0;
}













float dodaj(float a, float b) {
    return a + b;  
}

float odejmij(float a, float b) {
    return a - b;
}

float mnoz(float a, float b) {
    return a * b;
}

float dziel(float a, float b) {
    return a / b;
}