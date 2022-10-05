#include <stdio.h>
#include <string.h>



int main(){

    char letras [100];
    gets(letras);


    for(int i =0; i<strlen(letras); i++){
        if(letras[i]>='A' && letras[i]<='Z'){
            printf("%c",letras[i]);
        }
    }
        

    return 0;
}