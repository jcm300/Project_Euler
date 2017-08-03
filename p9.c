#include <stdio.h>

#define N 1000

//TODO:better implementation(not passing on all cases, for exemple) 

int main(){
    int a, b, c, prod=0;

    for(a=0; a<N && !prod; a++)
        for(b=0; b<N && !prod; b++)
            for(c=0; c<N && !prod; c++)
                if(a+b+c==N && a*a+b*b==c*c) prod=a*b*c;

    printf("The product is %d.\n",prod);
}
