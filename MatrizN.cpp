#include <stdio.h>
void trocal(int nu[], int n){
	int i, j, troca;
	for(i=0;i<n;i++){
		for(j=0+i;j<n;j++){
			if(nu[i]>nu[j]){
				troca = nu[i];
				nu[i] = nu[j];
				nu[j] = troca;
			}
		}
		
	}
	
	}



int main(){
	int num[10], i, j;
	for(i=0;i<10;i++){
		printf("Digite o numero: ");
		scanf("%d", &num[i]);	
	}
	trocal(num,10);
	for(i=0;i<10;i++){
		printf("\n%d", num[i]);
	}
}

