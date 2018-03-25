/*
Name: Filipe Lucas Vidal
Anhembi Morumbi University
www.github.com/filipevidalgnr
Exercise type: Switch function

Exercise: Faça um algoritmo que leia o período em que um aluno estuda:
M – Matutino, V – Vespertino ou N – Noturno e escreva uma das saudações a seguir:

M: BOM DIA
V: BOA TARDE
N: BOA NOITE 

 */

#include <stdio.h>

int main () {

    char greet;

    printf ("<====== BEM-VINDO AO SEU DIA ======> \n");
    printf ("Vamos te saudar de acordo com seu turno: \n BOM DIA para M\n BOA TARDE para V\n BOA NOITE para N\n");
    printf ("Qual dos tres e o seu turno? \n");

    fflush(stdin);

    scanf("%c", &greet);

    switch (greet) {
        case 'M':
            printf ("Bom dia, aluno!!! \n");
            break;

        case 'V':
            printf ("Boa tarde, aluno!!! \n");
            break;

        case 'N':
            printf ("Boa noite, aluno!!! \n");
            break;

        default:
            printf("Insira um turno valido!!! \n");
            break;
    }

    return 0;
}
