#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char *dizi;
dizi= (char*) malloc(10);
strcpy(dizi,"algoritma");
printf("yazi: %s \n adres:%u\n", dizi, dizi);

dizi= (char*) realloc(dizi,25);
strcat(dizi," ve programlama");
printf("yazi: %s \nadres:%u", dizi, dizi);

free(dizi);

return 0;
}
