#include <stdio.h>

int main(){
    int i=0;
    int n,total,esq,dir;
    char str[1010];
    scanf("%d",&n);
   
    while(n--){
        total = 0;
        esq = 0;  
        dir = 0;      
        scanf("%s",&str);

        for (i = 0; str[i]!='\0' ; i++){
            if (str[i] == '<')
                esq++;
            else if (str[i] == '>'){
                dir++;
                if(esq > 0){
                    esq--;                  
                    dir--;
                    total++;                  
                }
            }
        }        
       
        printf("%d\n",total ); 
    }
    
    return 0;
}