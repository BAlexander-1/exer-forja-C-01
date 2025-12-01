#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, num3, respMedia;

    printf("Digite o primiero número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    respMedia = (num1 + num2 + num3) /3;
    printf("A media dos números é: %.2f", respMedia);
    
    system("pause");
    return 0;
}