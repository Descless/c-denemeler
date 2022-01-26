#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

char metin1[100], metin2[100];
gets(metin1);
gets(metin2);

int a =strlen(metin1);
int b =strlen(metin2);

char *birlesim = (char*) malloc((a+b+1)*sizeof(char));
strcpy(birlesim, metin1);
strcpy(birlesim+a, metin2);

puts(birlesim);

return 0;
}
