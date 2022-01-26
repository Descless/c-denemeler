#include <stdio.h>
#include <stdlib.h>

void takas(int *x, int *y);

int main(){

int a=5,b=10;

printf("fonk once a: %d , b: %d\n", a, b);

takas(&a,&b);

printf("fonk sonra a: %d , b: %d", a, b);

return 0;
}

void takas(int *x, int *y){
    int a;
    a=*x;
    *x=*y;
    *y=a;
}

