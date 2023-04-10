#include <stdio.h>    


float dodaj(float a, float b)
{
return a+b;
}

float odejmij(float a, float b)
{
return a-b;
}

float pomnoz(float a, float b)
{
return a*b;
}

float dziel(float a, float b)
{
return a/b;
}


float (*wybierz_dzialanie())(float,float){
int wybor=0;
printf("Wybierz dzialanie:\n");
printf("1: Dodawanie\n");
printf("2: Odejmowanie\n");
printf("3: Mnozenie\n");
printf("4: Dzielenie\n");
scanf("%d",&wybor);

switch(wybor)
{
case 1:
printf("1: Wybrales Dodawanie\n\n");
return dodaj;
break;

case 2:
printf("2: Wybrales Odejmowanie\n\n");
return odejmij;
break;

case 3:
printf("3: Wybrales Mnozenie\n\n");
return pomnoz;
break;

case 4:
printf("3: Wybrales Dzielenie\n\n");
return dziel;
break;

default:
return NULL;

}

}




int main (){

//array of pointers to these functions
//tablica wskaźników przechowująca cztery funkcje


//int (*array[])(int,int) ={dodaj,odejmij,pomnoz,dziel};


/* 
int product=(*array[0])(3,15);
printf("product: %d\n",product);
 */
 

//int (*wynik)(float,float)=wybierz_dzialanie();

//rintf("answer:%d\n",wynik(20,5));



int (*array[])(int,int) ={dodaj,odejmij,pomnoz,dziel};



float x,y;
printf("Podaj arg 1\n");
scanf("%f",&x);
printf("Podaj arg 2\n");
scanf("%f",&y);


float (*wynik)(float,float)= wybierz_dzialanie();
printf("answer:%.2f\n",wynik(x,y));


    return 0;
}

