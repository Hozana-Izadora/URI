#include <stdio.h>
 
int main() {
 
    int N, x,horas, minutos, segundos;
    x=3600;//horas em segundos
    
    scanf("%d", &N);
    horas = (N/x); 
    minutos = (N -(x*horas))/60;
    segundos = (N -(x*horas)-(minutos*60));
    
    printf("%d:%d:%d\n",horas,minutos,segundos);
 
    return 0;
}