#include <stdio.h>

int main(){
    int x,y;

    scanf("%d %d", &x,&y);
    if(x>0 && y>0){
        puts("1");
    }

    else if(x>0 && y<0){
        puts("4");
    }
    else if(x<0 && y<0){
        puts("3");
    }
    else{
        puts("2");

    }
    
}