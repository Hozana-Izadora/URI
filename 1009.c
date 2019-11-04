// 1009.c
#include <stdio.h>
 
int main() {
 
    char nomeVendedor;
    double salarioFixo;
    double vendas,salarioFinal;
    scanf("%s",&nomeVendedor);
    scanf("%lf",&salarioFixo);
    scanf("%lf",&vendas);
    salarioFinal = salarioFixo+(vendas*0.15);

    printf("TOTAL = R$ %.2lf\n",salarioFinal);
 
    return 0;
}