// 1008.c
#include <stdio.h>
 
int main() {
 
    int num,horas;
    double valor,SALARIO;
    scanf("%d",&num);
    scanf("%d",&horas);
    scanf("%lf",&valor);
    SALARIO = horas*valor;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,SALARIO);
 
    return 0;
}