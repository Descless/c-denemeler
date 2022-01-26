#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

double* maxAdr(double a[], int boyut);

int main(){

double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
double *p;
int i;


for(i=0; i<6; i++){
    printf("indis:%d\n", i);
    printf("deger:%1.1lf\n", x[i]);
    printf("adres:%p\n", &x[i]);
}

p = maxAdr(x, 6);

printf("\nadressss: %p\n", p);
printf("degeeer: %1.1lf", *p);

return 0;
}

double* maxAdr(double a[], int boyut){
    double ebd = a[0];
    double *eba = &a[0];
    int i;

    for (i=1;i<boyut;i++){
        if(a[i]>ebd){
            ebd=a[i];
            eba=&a[i];
        }
    }
    return eba;
}
