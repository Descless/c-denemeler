#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//argv deðiþkenleri char olarak alýr, bunlarý çevirmek için atoi, atof veya atol (long) kullan

int main(){

int val=1903,*p, **pp;

p = &val;
pp = &p;

printf("val:%d \n p:%p \n pp:%p\n**pp:%d", val, p, pp,**pp);

return 0;
}
