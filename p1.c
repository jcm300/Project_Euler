#include <stdio.h>

#define N 1000

int main(){
    int i;
    long sum = 0;

    for(i=0; i<N; i++){
        if(i%3==0) sum+=i;
        else if(i%5==0) sum+=i;
    }

    printf("The sum is: %d \n",sum);
}
