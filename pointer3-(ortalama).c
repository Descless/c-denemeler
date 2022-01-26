#include <stdio.h>
#include <stdlib.h>

float ortalamabul(float dizi[], int n);

int main(){

float ort;
float b[]={10,20,30,40,50};

printf("ortalama: %f", ortalamabul(b, 5));

return 0;
}

float ortalamabul(float dizi[], int n){
    float toplam=0, *p;
    p=dizi;

    for(int i=0; i<n; i++)
        toplam+=*(p+i);

    return toplam/n;
}
