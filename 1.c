#include<stdio.h>
void imprimir();

int maiorValor(int n1, int n2);
 main(){
    int num1, num2 , retornoFuncao;
    printf("Digite os valores:");
    scanf("%d %d ", &num1, &num2); 
    retornoFuncao = maiorValor(num1, num2);
    printf("o numero maior e: %d",retornoFuncao);

    imprimir();
    
}
int maiorValor(int n1, int n2){
    if(n1>n2){
        return n1;
    }else{
        return n2;
    }
}
