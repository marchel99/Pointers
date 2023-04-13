#include <stdio.h>    


void increment(int *num){
*num=*num+1;

}



int main (){
int x=10;
printf("before: %d\n",x);
increment(&x);
printf("after: %d",x);



    return 0;
}

