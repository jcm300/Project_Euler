#include <stdio.h>

void oneTo10(int x, int *sum){
    *sum+=3;
    switch(x){
        //case 1: {*sum=0; break;} //one 3
        //case 2: {*sum=0; break;} //two 3
        case 3: {*sum+=2; break;} //three 5
        case 4: {*sum+=1; break;} //four 4
        case 5: {*sum+=1; break;} //five 4
        //case 6: {*sum=0; break;} //six 3
        case 7: {*sum+=2; break;} //seven 5
        case 8: {*sum+=2; break;} //eight 5
        case 9: {*sum+=1; break;} //nine 4
        default: break;
    }
}

void tenTo20(int x, int *sum){
    *sum+=8;
    switch(x){
        case 10: {*sum-=5; break;} //ten 3
        case 11: {*sum-=2; break;} //eleven 6
        case 12: {*sum-=2; break;} //twelve 6
        //case 13: {*sum+=0; break;} //thirteen 8 
        //case 14: {*sum+=0; break;} //fourteen 8
        case 15: {*sum-=1; break;} //fifteen 7
        case 16: {*sum-=1; break;} //sixteen 7
        case 17: {*sum+=1; break;} //seventeen 9
        //case 18: {*sum+=0; break;} //eighteen 8
        //case 19: {*sum+=0; break;} //nineteen 8
        default: break;
    }
}

void dezenas(int x, int *sum){
    *sum+=6;
    switch(x){
        //case 2: {*sum+=0; break;} //twenty 6
        //case 3: {*sum+=0; break;} //thirty 6
        case 4: {*sum-=1; break;} //forty 5
        case 5: {*sum-=1; break;} //fifty 5
        case 6: {*sum-=1; break;} //sixty 5
        case 7: {*sum+=1; break;} //seventy 7
        //case 8: {*sum+=0; break;} //eighty 6
        //case 9: {*sum+=0; break;} //ninety 6
        default: break;
    }
}

int main(){
    
    int sum=0;
    int i,j;

    for(i=0;i<1000;i++){
        j=i;
        while(j>0){
            if(j<10) {
                oneTo10(j,&sum);
                j=0;
            }else if(j<20){
                tenTo20(j,&sum);
                j=0;
            }else if(j<100){
                dezenas(j/10,&sum);
                j=j%10;
            }else{
                sum+=10;
                oneTo10(j/100,&sum);
                j=j%100;
                if(j==0) sum-=3; 
            }
        }
    }
    sum +=11; //one thousand
    printf("letras: %d \n",sum);
}
