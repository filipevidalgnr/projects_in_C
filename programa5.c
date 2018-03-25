/*
Name: Filipe Lucas Vidal
Anhembi Morumbi University
www.github.com/filipevidalgnr
Exercise type: Switch function

Exercise: Dado o cardápio de uma lanchonete:

Código          Produto          Preço
100          Cachorro-Quente     1,20
101          Bauru Simples       1,30
102          Bauru Com Ovo       1,50
103          Hamburguer          1,20
104          Cheeseburguer       1,30
105          Refrigerante        1,00

 */

#include <stdio.h>

int main () {
    int codigo;
    float quant, preco1, preco2, preco3, preco4, preco5, preco6, total;
    char produto;

    printf ("<====== BEM-VINDO(A) A LANCHO.NET ======> \n");
    printf ("Insira o codigo do produto de 100 a 105 para registrar no sistema: \n");

    fflush(stdin);
    scanf ("%i", &codigo);

    printf("Quantos foram consumidos?: \n");
    scanf ("%f", &quant);

    switch (codigo){
        case 100:
            preco1 = 1.20;
            total = preco1 * quant;
            printf ("Seu produto foi o Cachorro-Quente e o total foi: %f", total);
            break;

        case 101:
            preco2 = 1.30;
            total = preco2 * quant;
            printf ("Seu produto foi o Bauru Simples e o total foi: %f", total);
            break;

        case 102:
            preco3 = 1.50;
            total = preco3 * quant;
            printf ("Seu produto foi o bauru Com Ovo e o total foi: %f", total);
            break;

        case 103:
            preco4 = 1.20;
            total = preco4 * quant;
            printf ("Seu produto foi o hamburguer e o total foi: %f", total);
            break;

        case 104:
            preco5 = 1.30;
            total = preco5 * quant;
            printf ("Seu produto foi o Cheeseburguer e o total foi: %f", total);
            break;

        case 105:
            preco6 = 1.00;
            total = preco6 * quant;
            printf ("Seu produto foi o Refrigerante e o total foi: %f", total);
            break;

        default:
            printf ("Insira um codigo valido!!!\n");
    }
    return 0;
}
