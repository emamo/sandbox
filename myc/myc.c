#include<stdio.h>

int main(int argc, char* argv[]){
    signed char d;
    int i;
    printf("show bit pattern of signed char\n");
    for(i=0;i<=255;i++){
        d=i;
        printf("%03d: %08x\n",i,d);
    }
    return 0;
}

