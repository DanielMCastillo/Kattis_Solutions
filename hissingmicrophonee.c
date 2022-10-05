#include <stdio.h>
#include <string.h>

int main(){

    char cadena[31];
    scanf("%s",cadena);
    printf(strstr(cadena,"ss")==NULL ?"no hiss\n" : "hiss\n");
    

    return 0;
}