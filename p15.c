#include <stdio.h>
#define N 21

int main(){
	long long int matriz[N][N];
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(j==0 || i==0) matriz[i][j]=1;
			else matriz[i][j]=matriz[i-1][j]+matriz[i][j-1];
		}
	}
	printf("%lld\n", matriz[N-1][N-1]);
	return 0;
}
