#include <stdio.h>    

double add(double a, double b)
{
return a+b;
}


int main (){


double (*addp)(double, double)=add;


printf("%f\n",   add(2.3,5.15)   );

printf("%f\n",   addp(2.3,5.15)   );

printf("TRUE -> %d <-",   addp(2.3,5.15) ==add(2.3,5.15)  );



    return 0;
}

