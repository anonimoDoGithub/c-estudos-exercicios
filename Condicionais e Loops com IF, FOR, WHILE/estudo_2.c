#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    printf("Cadastro de Alunos \n");

    char nomeDoAluno[100]; // quantidade de caracteres

    for(int i = 1; i <= 5; i++){
        printf("Cadastro %d de 5 \n", i);

        printf("Digite o nome completo do aluno: \n");
        printf("Aluno, %s\n cadastrado com sucesso! \n\n", gets(nomeDoAluno)); // gets - Leia o que o usuário digitar

    }

}