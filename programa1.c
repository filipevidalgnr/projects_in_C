/*
Name: Filipe Lucas Vidal
Anhembi Morumbi University
www.github.com/filipevidalgnr
Exercise type: Switch function

Exercise: Faça um algoritmo que leia um inteiro entre 1 e 12 e imprima o nome do mês por extenso. */

#include <stdio.h>

int main () {
    int mes;

    printf ("<======BEM-VINDO AO PROGRAMA DOS MESES======> \n");
    printf ("Insira um numero entre 1 a 12: \n");
    scanf ("%i", &mes);

        switch (mes) {
            case 1:
            printf ("O mes 1 e Janeiro \n");
            break;

            case 2:
            printf ("O mes 2 e Fevereiro \n");
            break;

            case 3:
            printf ("O mes 3 e Marco \n");
            break;

            case 4:
            printf ("O mes 4 e Abril \n");
            break;

            case 5:
            printf ("O mes 5 e Maio \n");
            break;

            case 6:
            printf ("O mes 6 e Junho \n");
            break;

            case 7:
            printf ("O mes 7 e Julho \n");
            break;

            case 8:
            printf ("O mes 8 e Agosto \n");
            break;

            case 9:
            printf ("O mes 9 e Setembro \n");
            break;

            case 10:
            printf ("O mes 10 e Outubro \n");
            break;

            case 11:
            printf ("O mes 11 e Novembro \n");
            break;

            case 12:
            printf ("O mes 11 e Dezembro \n");
            break;

        default:
            printf ("Insira um numero valido \n");
        }

        return 0;
}
