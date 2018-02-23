/*
    Codigo desenvolvido por Matheus Henrique
    Linguagem C
    Usando CodeBlocks v 17.12
*/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


int main(){

    setlocale(LC_ALL,"portuguese");

    //Declarando variaveis
    int menu = 0;
    int usuario = 0;
    int pc;

    do{

    printf("\n\t\t\t     JOGO DA ADIVINHAÇÃO\n");

    printf("\n\t\t\t\t    MENU\n");

    printf("\n\t\t\t         [1] JOGAR\n");
    printf("\t\t\t         [2] AJUDA\n");
    printf("\t\t\t         [0] SAIR\n");

    printf("\n\t\t\tEscolha uma das opções do MENU: ");
    scanf("%d", &menu);

    switch(menu){

    case 1:
    srand(time(NULL)); //Alimenta o rand fazendo com que cada vez que o programa rode, um número diferente seja escolhido
    pc = rand() % 100; //Faz o computador escolher um número entre 0 e 100 e atribui a variavel PC

    //Laço de repetição da opção 1 = JOGAR
    for(int tentativa = 1 ; usuario != pc; ++tentativa){

    printf("\n");
    printf("\t        -----------------------------------------------\n");
    printf("\n\t\t\t     Digite um número: ");
    scanf("%d", &usuario);

       if(usuario < pc) //Se o número do Computador for maior, imprimi printf

            {
            printf("\n\t\tO número que o COMPUTADOR pensou é maior que %d.\n", usuario);
            }

            else if(usuario > pc) //Se o número do Computador for menor, imprimi printf

                {
                printf("\n\t\tO número que o COMPUTADOR pensou é menor que %d.\n", usuario);
                }

                else if(usuario == pc) //Se o número do usuario for igual ao do Computador, imprimi printf

                {
                    printf("\t        -----------------------------------------------\n");
                    printf("\n\t\t\t\tCARREGANDO...\n");
                    Sleep(2000); //Adiciona um delay de 2 segundos
                    printf("\n\t\t\t    Parabéns você acertou!!");
                    Sleep(1000);
                    printf("\n\t\t     O número que o COMPUTADOR pensou foi %d.\n", pc);
                    Sleep(1000);
                    printf("\t\t           Você usou %d tentativa(s)\n", tentativa); //Numero de tentativas até o acerto

                    printf("\n\t        Pressione qualquer tecla para voltar ao MENU."); //Volta ao menu
                    getch();

                    system("cls"); //Limpa tela
                }

    printf("\t\t           Você usou %d tentativa(s)\n", tentativa); //Número de tentativas até o acerto
    }
        break;

    case 2: //Opção 2 do MENU, explica ao usuario como o jogo funciona
        printf("\n              O JOGO DA ADIVINHAÇÃO funciona da seguinte forma:\n");
        printf("\n   ---------------------------------------------------------------------------");
        printf("\n   O computador irá pensar em um número entre 1 e 100 e você terá que adivinhar.");
        Sleep(3000); //Adiciona um delay de 3 segundos
        printf("\n      Você conseguirá visualizar quantas tentivas foi preciso para acertar.");
        Sleep(3000);
        printf("\n  Será informado se o número que o COMPUTADOR pensou é maior ou menor que o seu.\n");
        Sleep(3000);
        printf("\n                             Boa sorte!!\n");
        printf("   ---------------------------------------------------------------------------\n");

        printf("\n\t        Pressione qualquer tecla para voltar ao MENU."); //Voltar ao MENU
        getch(); //Faz a ação apertando qualquer tecla

        system("cls"); //Limpa tela

        break;

    case 0:
        break;

    default:                                                                              //Caso o usuario não escolha nenhuma das opções
        printf("\n\t         ERRO: Você não digitou nenhuma das opções disponíveis.\n");  //disponiveis no menu que são 1,2 ou 0
        printf("\n\t              Pressione qualquer tecla para voltar ao MENU."); //Volta ao MENU
        getch(); //Faz a ação apertando qualquer tecla

        system("cls"); //Limpa a tela
    }

    }while(menu != 0);

    return 0;
}
