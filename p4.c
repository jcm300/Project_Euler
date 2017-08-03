#include <stdio.h>

#define MAX 1000 //maximum number of the two numbers on the product

int isPalindrome(int x){
   int num = x, rest, n_num=0;

   while(num>0){
        rest = num % 10;
        n_num = n_num * 10 + rest;
        num = num / 10;
   }
   return (n_num==x);
}

int main(){
    int n1,n2, aux, maxProd=0;

    for(n1=0; n1<MAX; n1++)
        for(n2=0; n2<MAX; n2++)
            if((aux=n1*n2)>maxProd && isPalindrome(aux)) maxProd=aux;

    printf("The largest palindrome is %d.\n", maxProd);
}
