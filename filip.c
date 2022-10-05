#include<stdio.h>

int vueltas(int n){
    int m=0;

    while(n>0){
        m = m * 10 + n % 10;
        n = n/10;
    }
    return m;
}   



int main(){

    int n1,n2,m=0,res1,res2;

    scanf("%d%d",&n1,&n2);

    res1 = vueltas(n1);
    res2 = vueltas(n2);

    if(res1>res2){
        printf("%d\n",res1);
    }else{
        printf("%d\n",res2);
    }



    return 0;
}