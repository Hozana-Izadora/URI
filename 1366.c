#include<stdio.h>
int main()
{
	int n,c,v,i,ret =0, total ;
	
	//printf("Digite n:\n");
	while(n!=0){
		scanf("%d",&n);

		if (n>0){
			total = 0;
			for (i = 0; i < n; i++)
			{			
				//printf("Digite c e v\n");
				scanf("%d %d", &c, &v);
				if(v%2!=0){

					total+=(v-1);
				}

				else{

					total+=v;
				}
			}

			ret=total/4;

			printf("%d\n",ret);
		}
	}


	return 0;
}