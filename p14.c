#include <stdio.h>

#define TOP 1000000

int main(){
    int terms, max=0, i, maxN=0;
    long n;
    
    for(i=1;i<TOP;i++){
        terms=1;
        n=i;
        while(n!=1){
            //if(n%2) n=3*n +1;
            //else n=n/2;
            n = (n%2) ? (3*n +1) : n/2;
            terms++;
        }
        if(terms>max){
            max=terms;
            maxN=i;
        }
    }

    printf("The longest chain is %d and the starting number is %d under %d.\n",max,maxN,TOP);
}
