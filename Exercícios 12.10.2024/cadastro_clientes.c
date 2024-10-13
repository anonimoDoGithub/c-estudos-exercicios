#include <stdio.h>      //biblioteca de comunicação com o usuário
#include <stdlib.h>     //biblioteca de alocação de espaços em memória
#include <locale.h>     //biblioteca de alocação de texto por região

int main()
{
    int opcao = 0;
    int laco = 1;
    
    for(laco = 1; laco = 1;){
        
        //system("cls");
        
        setlocale(LC_ALL, "Portuguese");
        
        printf("### Cadastro de Clientes ###\n\n");
        printf("Escolha a opção desejada no menu:\n\n");
        printf("\t 1 - Registrar Cliente\n");
        printf("\t 2 - Consultar Cliente\n");
        printf("\t 3 - Deletar Cliente\n\n");
        printf("\t 4 - Sair!\n\n");
        
        printf("*Opção: ");
        
        scanf("%d", &opcao);
        
        //system("cls");
        
        switch(opcao){
            case 1:
            printf("Registrar Cliente!\n\n");
            break;
            
            case 2:
            printf("Consultar Cliente!\n\n");
            break;
            
            case 3:
            printf("Deletar Cliente!\n\n");
            break;
            
            case 4:
            printf("Sair!\n\n");
            break;
            
            default:
            printf("Opção Invalida!\n\n");
            break;
        }
        
        /*
        if(opcao == 1){
            printf("Registrar Cliente!\n\n");
            break;
            //system("pause");
        }
        if(opcao == 2){
            printf("Consultar Cliente!\n\n");
            break;
            //system("pause");
        }
        if(opcao == 3){
            printf("Deletar Cliente!\n\n");
            break;
            //system("pause");
        }
        if(opcao == 4){
            printf("Sair!\n\n");
            break;
            //system("pause");
        }
        if(opcao > 4 || opcao <= 0){
            printf("Opção Invalida!\n\n");
            break;
            //system("pause");
        }
        */
    }
    printf("©Todos os direitos reservados, Sérgio Felipe\n");
    return 0;
}
