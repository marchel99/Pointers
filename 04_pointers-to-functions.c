#include <stdio.h>    

double add(double a, double b)
{
return a+b;
}


int main (){
double (*addp)(double, double)=add;
double (*add_pointer)(double,double);
add_pointer=&add;
printf("%f\n",   add(2.3,5.15)   );
printf("%f\n",   addp(2.3,5.15)   );
printf("%f\n",   add_pointer(2.3,5.15)   );
printf("TRUE -> %d <-",add(2.3,5.15)==add_pointer(2.3,5.15));
    return 0;
}

