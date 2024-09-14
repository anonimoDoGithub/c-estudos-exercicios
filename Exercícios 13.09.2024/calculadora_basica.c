#include <stdio.h>

/*
Escreva um programa em C que funcione como uma calculadora básica. 
O programa deve solicitar ao usuário dois números e uma operação aritmética (+, -, *, /) e, em seguida, usar um switch-case para realizar a operação correspondente. 
Se a operação não for reconhecida, exiba uma mensagem de erro.
*/

int main(){

int numero1, numero2, operacao, soma;

printf("Digite um numero: ");
scanf("%d", &numero1);
printf("O numero digitado foi: %d\n\n", numero1);

printf("Digite outro numero: ");
scanf("%d", &numero2);
printf("O numero digitado foi: %d\n\n", numero2);

printf("Escolha uma operacao aritmetica: \nSOMA[1] SUBTRACAO[2] MULTIPLICACAO[3] DIVISAO[4]");
scanf("%d", &operacao);

switch (operacao)
{
case 1:
    soma = numero1 + numero2;
    printf("Operacao escolhida: SOMA.\n");
    printf("Resultado: %d + %d = %d\n", numero1, numero2, soma);
    break;

default:
    printf("ERROR!\n");
    break;
}

return 0;

}