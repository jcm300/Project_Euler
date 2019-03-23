#include <stdio.h>

int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(){
    //test input
    //int test[] = {3,7,4,2,4,6,8,5,9,3};
    //int lines = 4;

    //real input
    int test[] = {75,95,64,17,47,82,18,35,87,10,20,4,82,47,65,19,1,23,75,3,34,88,2,77,73,7,63,67,99,65,4,28,6,16,70,92,41,41,26,56,83,40,80,70,33,41,48,72,33,47,32,37,16,94,29,53,71,44,65,25,43,91,52,97,51,14,70,11,33,28,77,73,17,78,39,68,17,57,91,71,52,38,17,14,91,43,58,50,27,29,48,63,66,4,68,89,53,67,30,73,16,69,87,40,31,4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};
    int lines = 15; 

    int sum = test[0];
    int numbersPerLine = 2;
    int maxV, j=1, maxNext1, maxNext2;

    for(int i=1; i<lines-1; i++){
        maxV = max(test[j],test[j+1]);
        //see what is the best path two lines down, and not only one line down
        maxNext1 = max(test[j+numbersPerLine],test[j+numbersPerLine+1]);
        maxNext2 = max(test[j+numbersPerLine+1],test[j+numbersPerLine+2]);
        if(maxV==test[j]){
            if(maxV+maxNext1>test[j+1]+maxNext2){
                sum += maxV;
                j += numbersPerLine;
            }else{
                sum += test[j+1];
                j += numbersPerLine + 1;
            }
        }else{
            if(maxV+maxNext2>test[j]+maxNext1){
                sum += maxV;
                j += numbersPerLine + 1;
            }else{
                sum += test[j];
                j += numbersPerLine;
            }
        }
        numbersPerLine++;
    }
    sum += max(test[j],test[j+1]);

    printf("Max: %d\n", sum);
}
