#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, respSub;

    printf("Digite o primiero número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    respSub = num1 - num2;
    printf("A subtração dos números é: %.2f", respSub);

    system("pause");
    return 0;
}