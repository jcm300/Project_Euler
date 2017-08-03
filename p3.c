#include <stdio.h>

int main(){
    int i, b_prim=1, div;
    long x=600851475143; //number that we want to discover the large prime factor number

    while(x>1){
        div=0;
        for(i=2; i<=x && !div; i++){
            if(x%i==0){ //if i is a prime factor
                div=1;
                x=x/i; 
                if(i>b_prim) b_prim=i;
            } 
        }
    }

    printf("The biggest factor prim is %d. \n", b_prim);
}
