/*
Name: Filipe Lucas Vidal
Anhembi Morumbi University
www.github.com/filipevidalgnr
Exercise type: Switch function

Exercise: Crie um algoritmo que leia um número de 1 a 7 e imprima o dia da semana correspondente.
Sabendo que 1 corresponde ao Domingo, 2 a segunda ... e 7 a sábado.
 */

#include <stdio.h>

int main (){

    int dia;

    printf("<====== BEM-VINDO AO PROGRAMA DE DIAS DA SEMANA ======> \n");
    printf("Cada numero de 1 a 7 corresponde a um dia da semana, sendo 1 DOMINGO e 7 SABADO!!! \n");
    printf("Insira o numero da semana: \n");

    scanf ("%i", &dia);

    switch (dia) {
      case 1:
        printf ("O dia 1 da semana e DOMINGO!!! \n");
        break;

      case 2:
        printf ("O dia 2 da semana e SEGUNDA!!! \n");
        break;

      case 3:
        printf ("O dia 3 da semana e TERCA!!! \n");
        break;

      case 4:
        printf ("O dia 4 da semana e QUARTA!!! \n");
        break;

      case 5:
        printf ("O dia 5 da semana e QUINTA!!! \n");
        break;

      case 6:
        printf ("O dia 6 da semana e SEXTA!!! \n");
        break;

      case 7:
        printf ("O dia 7 da semana e SABADO!!! \n");
        break;

      default:
          printf ("Insira um numero valido!!! \n");
          }

    return 0;
}
