#include<stdio.h>

int main(){
	int n,k,j,r=0;
	printf("Digite o quadrante: ");
	scanf("%d",&n);
	
	int x[n],y[n];
	
	for(k=0;k<n;k++){
		scanf("%d%d",&x[k],&y[k]);
		printf("\n");
	}
	for(k=0;k<n;k++){
		for(j=0;j<n;j++){
			if( (x[k]==x[j] && k!=j) && (y[k]==y[j] && k!=j) ){
				r=1;
			}
		}
	}
	printf("Caiu no mesmo quadrante, tente novamente! \n%d",r);
	
}
