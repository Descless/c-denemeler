#include <stdio.h>
#include <stdlib.h>

void f1(int n);
void f2(int *n);

int main(){

int x = 55;

f1(x);
printf("%d\n", x);

f2(&x);
printf("%d", x);

return 0;
}

void f1(int n){
    n = 66;
}

void f2(int *n){
    *n=77;
}

