/*
Name: Filipe Lucas Vidal
Anhembi Morumbi University
www.github.com/filipevidalgnr
Exercise type: Switch function

Exercise: Faça um algoritmo que receba dois números e execute as operações
listadas a seguir, de acordo com a escolha do usuário.

M: Média entre números digitados
S: Diferença do maior para o menor
P: Produto entre os números digitados
D: Divisão do primeiro pelo segundo
 */

#include <stdio.h>

int main () {
    int x, y, calculo;
    char escolha;

    printf ("<====== BEM-VINDO AO PROGRAMA DE CALCULO DE ESCOLHAS ======> \n");
    printf ("Primeiro, insira dois numeros abaixo: \n");
    scanf ("%i", &x);
    scanf ("%i", &y);

    printf ("Agora vamos escolher a operacao que voce deseja!!! \n");
    printf ("Escolha: \n M para MEDIA\n S para DIFERENCA DO MAIOR PARA MENOR\n P para PRODUTO ENTRE OS NUMEROS DIGITADOS\n D para DIVIDIR PRIMEIRO PELO SEGUNDO\n ");
    fflush(stdin);
    scanf ("%c", &escolha);

    switch (escolha) {
        case 'M':
        calculo = (x + y) / 2;
        printf("%i", calculo);
        break;

        case 'S':
            if (x > y) {
                calculo = x - y;
            }
            else  {
                calculo = y - x;
            }

            printf("%i", calculo);
            break;

        case 'P':
            calculo = x * y;
            printf("%i", calculo);
            break;

        case 'D':
            if (y == 0) {
                printf ("Operacao invalida!!! \n");
            }

            else {
                calculo = x / y;
            } //The "if" command reffers to the fact that divisor should never be zero!!!

            printf("%i", calculo);
            break;

        default:
            printf ("Reinicie o programa e tente novamente \n");
    }

    printf ("\nObrigado por participar. See you around!!! \n");

    return 0;
}
