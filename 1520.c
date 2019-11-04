#include<stdio.h>
#define TAM_MAX 100
int main()
{
	int  vetor[TAM_MAX];
	int n,i,j,x,y,T; 
	int esquerda =0 , direita =0 ;
	//puts("Digite a qtd de caixas");
	while(scanf("%d",&n)!= EOF){
		for (i = 0; i <= TAM_MAX; ++i){
			vetor[i] = 0;
		}		
		for(i=0;i<n;i++){			
			//puts("Digite x e y");
			scanf ("%d %d",&x, &y);
			for ( ; x <= y ; x++)
			{
				vetor[x-1] = vetor[x-1]+1;
				//printf("vetor i:%d\n", vetor[i]);
			}
			//printf("Números recebidos: %d %d\n",x,y);
		}

		//puts("digite o t");
		scanf("%d",&T);
		direita=0;
		esquerda=0;
		
		for(i=0;i<T-1;i++){ 
			direita += vetor[i];
		}
		for(i=0;i<=T-1;i++){ 
			esquerda += vetor[i];
		}
		if(vetor[T-1] != 0){
			printf("%d found from %d to %d\n",T,direita,esquerda-1);
		}else{
			printf("%d not found\n",T);
		}
	}
	
	return 0;
}