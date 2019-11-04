#include <stdio.h>

int main(){
	char expression[1000];
	int i,left, right;
	while(scanf("%s",&expression) != EOF){
		left = 0;
		right = 0;
		for(i = 0; expression[i] != '\0'; i++){
			if(expression[i] == '(') {
				left++;
			}
			else if (expression[i] == ')'){
				right++;
				if(left > 0){
					left--;					
					right--;					
				}
			}
		}
		if(left == 0 && right == 0){
			printf("correct\n");
		}
		else printf("incorrect\n");
	}
	return 0;
}