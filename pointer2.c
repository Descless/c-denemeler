#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//argv deðiþkenleri char olarak alýr, bunlarý çevirmek için atoi, atof veya atol (long) kullan

int main(){

int i, b[]={10,20,30,40}, *pb;
pb=b;

printf("Yontem 1: dizi\n");
for(i=0;i<4;i++)
    printf("b[%d]:   %d\n", i, b[i]);

printf("Yontem 2: pointer\n");
for(i=0;i<4;i++)
    printf("*(pb+%d):    %d\n", i, *(pb+i));

printf("Yontem 3: pointer + dizi\n");
for(i=0;i<4;i++)
    printf("*(b+%d):    %d\n", i, *(b+i));

return 0;
}
