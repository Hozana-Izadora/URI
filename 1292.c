#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
	long double PI = 3.1415926535897932384626433 ;
	long double lado, x, seno1,seno2;
	//Função arco-cosseno
	PI=acos(-1.0);
	//Função Seno
	seno1=sin(63*PI/180.0);
	seno2=sin(108*PI/180.0);

	while(scanf("%Lf", &lado)>0){
		x=lado*(seno2/seno1);

		printf("%.10Lf\n", x);
	}
	return 0;
}
