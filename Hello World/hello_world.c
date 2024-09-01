#include <stdio.h> // .h são bibliotecas | stdio.h - rotinas padrão de (in)entrada e (out)saída definidas pelos criadores da linguagem C.

int main(){ // função main() é nosso ponto de partida, quando vc roda o programa a primeira coisa que ele é executar o que está na main()
    printf("\n###############\n"); // sempre colocar ;
    printf("# Hello World #\n"); // \n é ENTER ;
    printf("###############\n");

    int idadeDoPlaneta = 5;
    printf("O planeta Terra, tem mais aproximadamente %d bilhoes de anos.", idadeDoPlaneta); // %d para número INTEIRO (me deixa trocar "aquele local" pela variável)

    int anoAtual;
    printf("\nEm que ano estamos? \n");
    scanf("%d", &anoAtual); // scanf pega o valor digitado
    printf("Nossa, ja estamos no ano de %d!", anoAtual);
    
    int idadeUser;
    printf("\nMe fale, qual a sua idade hoje? \n");
    scanf("%d", &idadeUser); // scanf pega o valor digitado
    printf("Legal, vc tem %d anos de idade.", idadeUser);

    int humano;
    printf("\nVoce e um humano: (1)sim ou (2)nao? \n");
    scanf("%d", &humano);
    if(humano == 1){
        printf("Fico feliz em saber que os humanos, estao vivos! \n");
    }
    else if(humano == 2){
        printf("Que pena, pensei que estava falando com um humano!");
    }
    else{
        printf("Nao compreendi!");
    }
    
    return 0;
}
