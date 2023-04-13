#include <stdio.h>    


void increment(int *num){
*num=*num+1;

}



int main (){
int x=10;
printf("beofre",x);
increment(&x);
printf("after",x);



    return 0;
}

