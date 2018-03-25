/*
Name: Filipe Lucas Vidal
Anhembi Morumbi University
www.github.com/filipevidalgnr
Exercise type: Switch function

Exercise: Um funcionário receberá aumento de acordo com o seu plano de trabalho.
Faça um algoritmo que leia o plano de trabalho e o salário atual de um
funcionário e calcule e imprima o seu novo salário.

A: 10%
B: 15%
C: 20%

FYI: If you see into the code, the salary increase was made by multiply the salary
with A, B or C class divided by 100!!!

 */

#include <stdio.h>

int main () {

    int salario, A, B, C;
    char rendimento;

    printf ("<====== BEM-VINDO AO PROGRAMA DO SEU AUMENTO ======. \n");
    printf ("Primeiro, insira sem centavos o seu salario: \n");
    fflush(stdin);
    scanf ("%i", &salario);

    printf ("Se seu rendimento foi:\n A, aumento sera de 10%\n B, aumento sera de 15%\n C, aumento sera de 20%\n");
    printf ("Insira a letra do seu rendimento: \n");
    fflush(stdin);
    scanf ("%c", &rendimento);

    switch (rendimento) {
        case 'A':
            A = salario * 10 / 100;
            printf ("Seu salario sera: %i", salario + A);
            break;

        case 'B':
            B = salario * 15 / 100;
            printf ("Seu salario sera: %i", salario + B);
            break;

        case 'C':
            C = salario * 20 / 100;
            printf ("Seu salario sera: %i", salario + C);
            break;

        default:
            printf("Insira uma entrada valida \n");
    }
    return 0;
}
