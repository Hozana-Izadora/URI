#include<stdio.h>
int main()
{
	int c = 0,p = 0;
	int r_gol = 0,b_gol = 0,g_gol = 0;
	char times[4];
	char time1,time2;
	
	//puts("entre com c:\n");
	scanf("%d",&c);
	
	
	while(c--){
		//puts("entre com p:\n");
		scanf("%d",&p);	
		while(p--){	
			scanf(" %[^\n]s", times); 
			time1 = times[0]; 		
			time2 = times[2]; 
		
			// TIME R		
			if (time1 == 'R'){			
				if (time2 == 'G')
				{
					r_gol = r_gol+2;
				}else{
					r_gol = r_gol+1;
				}
			}	
			// TIME G	
			if (time1 == 'G'){
				if (time2 == 'B'){
					g_gol = g_gol+2;
				}else{
					g_gol = g_gol+1;
				}
			}
			// TIME B	
			if (time1 == 'B'){
				if (time2 == 'R')
				{
					b_gol = b_gol+2;
				}else{
					b_gol = b_gol+1;
				}
			}
		
		}
		//printf("RED: %d GREEN: %d BLUE: %d \n",r_gol,g_gol,b_gol);
		
		if (r_gol>g_gol && r_gol>b_gol){
			if (g_gol==b_gol){
				printf("red\n");
			}else
				printf("red\n");
			
		}
		else if (g_gol>r_gol && g_gol>b_gol ){
			if (r_gol==b_gol){
				printf("green\n");
			}else
				printf("green\n");
		}
		else if(b_gol>r_gol && b_gol>g_gol){
			if (r_gol==g_gol){
				printf("blue\n");
			}else
				printf("blue\n");
				
		}
		else{		
			if (r_gol == g_gol && r_gol == b_gol && g_gol == b_gol){
				printf("trempate\n");
			}
			else if (r_gol == g_gol || b_gol == g_gol || r_gol == b_gol){				
				printf("empate\n");
			}
		
	}		
			
		r_gol = 0;
		g_gol = 0;
		b_gol = 0;
		
	}
	
	return 0;
}
