#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//argv de�i�kenleri char olarak al�r, bunlar� �evirmek i�in atoi, atof veya atol (long) kullan

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
