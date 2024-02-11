#include <stdlib.h>
#include<stdio.h>
int main(){
    int a=2;
    int b=9;

    int *pv= (int*) malloc(10* sizeof(int) );
    for(int i=0,j=0;i<10;i++,j+=a){
        pv[i]=j;
    }
    printf("%0d", *(pv-a+b));
    return 0;
}