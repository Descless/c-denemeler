#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

int mesafe(int x, ...){

int i, noktalar [100][2];
double mesaf;


va_list liste;
va_start(liste, x);

for(i=0; i<x;i++){
    noktalar[i][0] = va_arg(liste, int);
    noktalar[i][1] = va_arg(liste, int);
}

va_end(liste);

for(i=0;i<x;i++){
    for(int j=i+1; j<x;j++){
        mesaf = sqrt(pow((noktalar[i][0]-noktalar[j][0]), 2.0) + pow((noktalar[i][1]-noktalar[j][1]), 2.0));
        printf("%d. nokta ve %d. nokta arasindaki mesafe: %f \n", i+1, j+1, mesaf);
    }
}
return 0;
}

int main(){

mesafe(5, 6, 2, 3, 1, 7, 8, 15, 16, 25, 36);

return 0;
}
