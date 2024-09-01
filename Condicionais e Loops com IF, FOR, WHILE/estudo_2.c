#include <stdio.h>
#include <math.h>
#include <string.h>

#define NUMERO_DE_CADASTRO 10 // #define é como se declara uma CONSTANTE

int main(){
    printf("Cadastro de Alunos \n");

    char nomeDoAluno[100]; // quantidade de caracteres

    for(int i = 1; i <= NUMERO_DE_CADASTRO; i++){
        printf("Cadastro %d de %d \n", i, NUMERO_DE_CADASTRO);

        printf("Digite o nome completo do aluno: \n");
        printf("Aluno, %s\n cadastrado com sucesso! \n\n", gets(nomeDoAluno)); // gets - Leia o que o usuário digitar

    }

    printf("Todos os alunos cadastrado, com sucesso! \n");

}