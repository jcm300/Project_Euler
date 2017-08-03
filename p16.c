#include <stdio.h>

#define T 310
#define e 1000

int main(){
	int matriz[e][T];
	int i,j, ta=1,aux;
	int sum=0;

	for(i=0;i<e;i++)
		for(j=0;j<T;j++)
			matriz[i][j]=0;

	matriz[0][0]=2;
	
	for(i=1; i<e;i++){
		j=0;
		while(j<ta){
			aux=2*matriz[i-1][j];
			matriz[i][j]=matriz[i][j]+aux%10;
			if(aux>=10){
				aux=aux/10;
				matriz[i][j+1]=aux;
			}
			j++;
		}
		while(matriz[i][j]/10>0){
			matriz[i][j+1]=matriz[i][j]/10;
			matriz[i][j]=matriz[i][j]%10;
			j++;
		}
		if(matriz[i][j]) j++;
		ta=j;
	}
	for(i=0;i<ta;i++){
		sum=sum+matriz[e-1][i];
		printf("%d", matriz[e-1][i]);
	}
	printf("\n%d\n", sum);
}