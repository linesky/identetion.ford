#include<stdio.h>
#include<stdlib.h>

int mults(int a, int b){
    int dest=0;
    int sour=a;
    int sour1=b;
    asm( "mul %0,%1,%2"
    
        :"=r" (dest)
        :"r" (sour),
        "r" (sour1)
       
       );
       return dest;
}
int main(){
    

    printf("number...%i\n",mults(10,11));
    return 0;

}
