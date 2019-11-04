#include <stdio.h>
int main(){
	
	int A[1000], B[1000], maior, N, i, j = 0, num;

	while (1) {
		// Numero de elementos no vetor
		scanf ("%d", &N);
		if(N == 0){
            break;
		}

		while (1) {
	
			maior = N;
			j = 0;
			
			//Preenchendo o vetor
			for (i = 0; i < N; i++) {
				scanf("%d", &num);
				if(num == 0) {
					break;
				}
				else{
                    A[i] = num;
				}
			}
			
			// Quebra para ir pro laço externo
			if(num == 0) {
				printf("\n");
				break;
			}

			
			for (i = N-1; i >= 0; i--) {
				
				//Verifica se o vetor ta ordenado normal
				if(A[i] == maior) {
				 	maior--;
				}
			
				else{
				 	B[j++] = A[i];
				}
				
				//Verifica se o vetor ta ordenado ao contrario
				while (j > 0) {
				 	if(B[j-1] == maior) {
				 		j--;
				 		maior--;
				 	}
					else{
				 		break;
				 	}
				}
			}


			if (maior == 0) {
				printf("Yes\n");
			}
			else {
				printf("No\n");
			}
		}
	}
	
	return 0;
}
