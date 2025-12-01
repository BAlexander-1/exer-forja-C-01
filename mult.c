#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, respMult;

    printf("Digite o primiero número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    respMult = num1 * num2;
    printf("A divisão dos números é: %.2f", respMult);
    
    system("pause");
    return 0;
}