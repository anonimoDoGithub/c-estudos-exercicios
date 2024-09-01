#include <stdio.h> // .h são bibliotecas

int main(){ // função main() é nosso ponto de partida, quando vc roda o programa a primeira coisa que ele é executar o que está na main()
    printf("\n###############\n"); // sempre colocar ;
    printf("# Hello World #\n"); // \n é ENTER ;
    printf("###############\n");

    int idadeDoPlaneta = 4;
    printf("O planeta Terra tem mais de %d bilhoes de anos.", idadeDoPlaneta); // %d para número INTEIRO

    int anoAtual;
    printf("\nEm que ano estamos? \n");
    scanf("%d", &anoAtual); // scanf pega o valor digitado
    printf("Nossa, ja estamos no ano de %d!", anoAtual);
    
    int idadeUser;
    printf("\nMe fale, qual a sua idade hoje? \n");
    scanf("%d", &idadeUser); // scanf pega o valor digitado
    printf("Legal vc tem, %d anos de idade.", idadeUser);
    
    return 0;
}
