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

    printf("\n\t\t\t     JOGO DA ADIVINHA��O\n");

    printf("\n\t\t\t\t    MENU\n");

    printf("\n\t\t\t         [1] JOGAR\n");
    printf("\t\t\t         [2] AJUDA\n");
    printf("\t\t\t         [0] SAIR\n");

    printf("\n\t\t\tEscolha uma das op��es do MENU: ");
    scanf("%d", &menu);

    switch(menu){

    case 1:
    srand(time(NULL)); //Alimenta o rand fazendo com que cada vez que o programa rode, um n�mero diferente seja escolhido
    pc = rand() % 100; //Faz o computador escolher um n�mero entre 0 e 100 e atribui a variavel PC

    //La�o de repeti��o da op��o 1 = JOGAR
    for(int tentativa = 1 ; usuario != pc; ++tentativa){

    printf("\n");
    printf("\t        -----------------------------------------------\n");
    printf("\n\t\t\t     Digite um n�mero: ");
    scanf("%d", &usuario);

       if(usuario < pc) //Se o n�mero do Computador for maior, imprimi printf

            {
            printf("\n\t\tO n�mero que o COMPUTADOR pensou � maior que %d.\n", usuario);
            }

            else if(usuario > pc) //Se o n�mero do Computador for menor, imprimi printf

                {
                printf("\n\t\tO n�mero que o COMPUTADOR pensou � menor que %d.\n", usuario);
                }

                else if(usuario == pc) //Se o n�mero do usuario for igual ao do Computador, imprimi printf

                {
                    printf("\t        -----------------------------------------------\n");
                    printf("\n\t\t\t\tCARREGANDO...\n");
                    Sleep(2000); //Adiciona um delay de 2 segundos
                    printf("\n\t\t\t    Parab�ns voc� acertou!!");
                    Sleep(1000);
                    printf("\n\t\t     O n�mero que o COMPUTADOR pensou foi %d.\n", pc);
                    Sleep(1000);
                    printf("\t\t           Voc� usou %d tentativa(s)\n", tentativa); //Numero de tentativas at� o acerto

                    printf("\n\t        Pressione qualquer tecla para voltar ao MENU."); //Volta ao menu
                    getch();

                    system("cls"); //Limpa tela
                }

    printf("\t\t           Voc� usou %d tentativa(s)\n", tentativa); //N�mero de tentativas at� o acerto
    }
        break;

    case 2: //Op��o 2 do MENU, explica ao usuario como o jogo funciona
        printf("\n              O JOGO DA ADIVINHA��O funciona da seguinte forma:\n");
        printf("\n   ---------------------------------------------------------------------------");
        printf("\n   O computador ir� pensar em um n�mero entre 1 e 100 e voc� ter� que adivinhar.");
        Sleep(3000); //Adiciona um delay de 3 segundos
        printf("\n      Voc� conseguir� visualizar quantas tentivas foi preciso para acertar.");
        Sleep(3000);
        printf("\n  Ser� informado se o n�mero que o COMPUTADOR pensou � maior ou menor que o seu.\n");
        Sleep(3000);
        printf("\n                             Boa sorte!!\n");
        printf("   ---------------------------------------------------------------------------\n");

        printf("\n\t        Pressione qualquer tecla para voltar ao MENU."); //Voltar ao MENU
        getch(); //Faz a a��o apertando qualquer tecla

        system("cls"); //Limpa tela

        break;

    case 0:
        break;

    default:                                                                              //Caso o usuario n�o escolha nenhuma das op��es
        printf("\n\t         ERRO: Voc� n�o digitou nenhuma das op��es dispon�veis.\n");  //disponiveis no menu que s�o 1,2 ou 0
        printf("\n\t              Pressione qualquer tecla para voltar ao MENU."); //Volta ao MENU
        getch(); //Faz a a��o apertando qualquer tecla

        system("cls"); //Limpa a tela
    }

    }while(menu != 0);

    return 0;
}
