#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int p_n1, int p_n2);
int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1, num2, res;

    printf("Soma\n");
    printf("__\n");

        printf("digite o primeiro numero: ");
    scanf(" %d", &num1);
    printf("digite o segundo numero: ");
    scanf(" %d", &num2);
    res = soma(num1, num2);
    printf("O resultado da soma entre %d + %d = %d \n", num1, num2, res);
    system("pause");
    return 0;
}
int soma(int p_n1, int p_n2)
{
    int valor;

    valor = p_n1 + p_n2;
}