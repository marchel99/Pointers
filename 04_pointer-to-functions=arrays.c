#include <stdio.h>    


double add(double a, double b)
{
return a+b;
}

double substract(double a, double b)
{
return a-b;
}

double multiply(double a, double b)
{
return a*b;
}

double divide(double a, double b)
{
return a/b;
}




int main (){

//array of pointers to these functions
//tablica wskaźników przechowująca cztery funkcje
int (*array[])(int,int) ={substract,multiply,divide};





int product=(*array[1]) (3,15);

printf("product: %d\n",product);




    return 0;
}

