#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//argv deðiþkenleri char olarak alýr, bunlarý çevirmek için atoi, atof veya atol (long) kullan

int main(int argc, char* argv[]){

for(int i=0; i<argc; i++){
    printf("%s \n", argv[i]);
}

char klasoradi[100];
strcpy(klasoradi, "./");
strcat(klasoradi, "dosya");
puts(klasoradi);

mkdir(klasoradi);

return 0;
}
