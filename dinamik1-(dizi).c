#include <stdio.h>
#include <stdlib.h>

int main(){

int i, n, toplam=0;
int *dizi;
printf("eleman sayisi: ");
scanf("%d\n", &n);

dizi = (int *) malloc(sizeof(int)*n);

for(i=0;i<n;i++){
    printf("sayi girin: ");
    scanf("%d", &dizi[i]);
}

for(i=0;i<n;i++)
    toplam+=dizi[i];

printf("toplam: %d\n", toplam);
printf("ortalama: %d", toplam/n);

free(dizi);

return 0;
}
