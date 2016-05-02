#include<stdio.h>

int main(int argc, char* argv[]){
    signed char d;
    int i;
    printf("show bit pattern of signed char");
    for(i=0;i<=255;i++){
        d=i;
        printf("%d: %x\n",i,d);
    }
    return 0;
}

