#include <stdio.h>
int main(){
	int h1,m1,h2,m2;
	int x=1;
	int soma,min2;
	while (x==1){
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
		
		if(h1==0 && h2==0 && m1==0 && m2==0){
			break;
		}
		else{
			if (h1 == h2){
        if(m1>m2)
          soma = 1440 - (m1-m2);
        else  
				  soma = m1 - m2;
        if (soma>0)
				  printf("%d\n",soma);
        else
          printf("%d\n",-soma);  
			}
			if(h1>h2){
				//if (h1==0)
				//	h1 = 24*60;
				//else
					h1 = h1 * 60;
				//if (h2==0)
					//h2 = 24*60;
				//else
					h2 *= 60;
					
				min2 = (h1+m1) - (h2+m2);
					
				soma = 1440 - min2;
			if (soma>0)
				  printf("%d\n",soma);
        else
          printf("%d\n",-soma); 
			}
			if(h1<h2){
				//if (h1==0)
					//h1 = 24*60;
				//else
					h1 = h1 * 60;
				//if (h2==0)
				//	h2 = 24*60;
				//else
					h2 *= 60;
				min2 =  (h2+m2) - (h1+m1) ;
				
				soma = min2;
					
			if (soma>0)
				  printf("%d\n",soma);
        else
          printf("%d\n",-soma); 
			}
		}
		
	
	
	}
	return 0;
}