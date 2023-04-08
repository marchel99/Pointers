#include <stdio.h>    

int main (){
int a= 200;
int b= 230;

int *p;
p=&a;

int **q;
q=&p;

int ***j;
j=&q;

int *g=&b;

// int *p=&a;
// RÓWNOZNACZNY Z
// int *p=&a;

printf("Adres pointer: %d Adres zmiennej a: %d\n",&p,&a);
printf("Adres: %d zmiennej %d\n",p,*p);
printf("200:%d 201:%d\n",*p,*p+1);
printf("Adres*q:%d **q:%d\n",q,**q);

printf("True?->%d\n",***j==a);


printf("Adres *p: %d Wskazuje na: %d\n",&p,a);
printf("Adres **q: %d Wskazuje na: %d\n",&q,p);
printf("Adres ***j: %d Wskazuje na: %d\n",&j,q);



printf("sth-> %d <-\n",*j); // 6422216
printf("sth-> %d <-\n",**j); // 6422220 wskauzje na p, a p jest zmienną wskaźnikową przechwytującą adres zmiennej a
printf("sth-> %d <-\n",***j); //wskazuje na a, 200
printf("sth-> %d <-\n",*g);



printf("Adres a: %d \n",&a);
printf("Adres p: %d \n",&p);
printf("Adres q: %d \n",&q);
printf("Adres j: %d \n",&j);

    return 0;
}

