/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: um programa que exiba os tamanhos dos 5 tipos básicos, dos 2 modificadores de sinal e dos 3 modificadores de largura.

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>

#define OK                          0
#define INVALID_NUM_ARGUMENT        1
#define INVALID_ARGUMENT            2

#define NUM_ARGUMENTS               1

int
main(int argc, char **argv)
{
    /* \/ Variables Declaration \/ */
    unsigned index;

    /* \/ Error treatment \/ */
    if (argc != NUM_ARGUMENTS) {
        printf ("\"Use: %s \"\n", argv[0]);
        exit (INVALID_NUM_ARGUMENT);
    }

    /* \/ main functionality \/ */
    printf ("\n");

    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n");
    printf ("\r\nTamanhos dos Tipos Basicos\n");
    printf ("\n");

    printf ("\rvoid:%88lu %s\n", sizeof(void), sizeof(void) == 1 ? "byte" : "bytes");
    printf ("\rchar:%88lu %s\n", sizeof(char), sizeof(char) == 1 ? "byte" : "bytes");
    printf ("\rint:%89lu %s\n", sizeof(int), sizeof(int) == 1 ? "byte" : "bytes");
    printf ("\rfloat:%87lu %s\n", sizeof(float), sizeof(float) == 1 ? "byte" : "bytes");
    printf ("\rdouble:%86lu %s\n", sizeof(double), sizeof(double) == 1 ? "byte" : "bytes");
    
    printf ("\n");

    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n");
    printf ("\r\nTamanhos dos Modificadores de Sinal\n");
    printf ("\n");

    printf ("\rsigned:%86lu %s\n", sizeof(signed), sizeof(signed) == 1 ? "byte" : "bytes");
    printf ("\runsigned:%84lu %s\n", sizeof(unsigned), sizeof(unsigned) == 1 ? "byte" : "bytes");
    
    printf ("\n");

    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n");
    printf ("\r\nTamanhos dos Modificadores de Largura\n");
    printf ("\n");

    printf ("\rshort:%87lu %s\n", sizeof(short), sizeof(short) == 1 ? "byte" : "bytes");
    printf ("\rlong:%88lu %s\n", sizeof(long), sizeof(long) == 1 ? "byte" : "bytes");
    printf ("\rlong long:%83lu %s\n", sizeof(long long), sizeof(long long) == 1 ? "byte" : "bytes");
    
    printf ("\n");
    
    /* print 100 times "-" */
    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n\n");

    return OK;
}

/* $RCSfile$ */
