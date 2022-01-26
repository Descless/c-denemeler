#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(char*dizikopya, int pozisyon, int uzunluk);

int main(){

char *dizi= (int *) malloc(100 * sizeof(int));
int pozisyon, uzunluk;

printf("metin: ");
gets(dizi);

char *dizi2=(char*)malloc(strlen(dizi+1)*sizeof(char));
strcpy(dizi2, dizi);

scanf("%d",&pozisyon);
pozisyon--;
scanf("%d",&uzunluk);

char *gptr = substring(dizi2, pozisyon, uzunluk);

puts(gptr);

return 0;
}

char *substring(char*dizikopya, int pozisyon, int uzunluk){
    for(int i=0; i<uzunluk; i++)
        dizikopya[i]=dizikopya[i+pozisyon];

        dizikopya[uzunluk]='\0';

    dizikopya=(char*) realloc(dizikopya, uzunluk+1);
    return dizikopya;
}
