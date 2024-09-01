#include <stdio.h>
#include <math.h>
#include <float.h>


int main(){
    printf("MEDIA ESCOLAR \n");

    float notaA, notaB, notaC, media, resultado;

    printf("Digite a nota A: \n");
    scanf("%f", &notaA);
    printf("Nota A: %0.1f \n \n", notaA);

    printf("Digite a nota B: \n");
    scanf("%f", &notaB);
    printf("Nota A: %0.1f \n \n", notaB);

    printf("Digite a nota C: \n");
    scanf("%f", &notaC);
    printf("Nota C: %0.1f \n \n", notaC);

    media = (notaA + notaB + notaC) / 3;

    printf("Resultado da Nota Final: %0.1f \n", media);

    if(media >= 6.0){
        printf("APROVADO!");
    }
    else if(media < 6.0){
        printf("REPROVADO!");
    }

}