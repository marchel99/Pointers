#include <stdio.h>    

int main (){

int a=5;
int b=4;

//just a variable
int *pa;
//basic declaration of pointer. It has to be an int, because it points to the int value
pa=&a;

printf("Variable: %d, Pointer that points to that variable:%d\n",a,*pa);
printf("%d",a==*pa);





    return 0;
}

