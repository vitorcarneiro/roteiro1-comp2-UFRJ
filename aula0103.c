/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: um programa que exiba os tamanhos dos 5 tipos básicos, dos 2 modificadores 
de sinal e dos 3 modificadores de largura, as linhas necessárias para exibir os 
tamanhos em bytes das combinações válidas entre modificadores de sinal e modificadores
de largura, entre tipos básicos e modificadores de sinal, entre tipos básicos e modificadores
de largura e entre tipos básicos, modificadores de sinal e modificadores de largura.

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

    printf ("\n");
    
    printf ("\r\nTamanhos dos Modificadores de Sinal combinados com Modificadores de Largura\n");
    printf ("\n");

    printf ("\rsigned short:%80lu %s\n", sizeof(signed short), sizeof(signed short) == 1 ? "byte" : "bytes");
    printf ("\rsigned long:%81lu %s\n", sizeof(signed long), sizeof(signed long) == 1 ? "byte" : "bytes");
    printf ("\rsigned long long:%76lu %s\n", sizeof(signed long long), sizeof(signed long long) == 1 ? "byte" : "bytes");
    printf ("\runsigned short:%78lu %s\n", sizeof(unsigned short), sizeof(unsigned short) == 1 ? "byte" : "bytes");
    printf ("\runsigned long:%79lu %s\n", sizeof(unsigned long), sizeof(unsigned long) == 1 ? "byte" : "bytes");
    printf ("\runsigned long long:%74lu %s\n", sizeof(unsigned long long), sizeof(unsigned long long) == 1 ? "byte" : "bytes");
    
    printf ("\n");
    
    /* print 100 times "-" */
    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n");

    printf ("\r\nTamanhos dos Tipos Basicos combinados com Modificadores de Sinal\n");
    printf ("\n");

    printf ("\runsigned char:%79lu %s\n", sizeof(unsigned char), sizeof(unsigned char) == 1 ? "byte" : "bytes");
    printf ("\rsigned char:%81lu %s\n", sizeof(signed char), sizeof(signed char) == 1 ? "byte" : "bytes");
    printf ("\runsigned int:%80lu %s\n", sizeof(unsigned int), sizeof(unsigned int) == 1 ? "byte" : "bytes");
    printf ("\rsigned int:%82lu %s\n", sizeof(signed int), sizeof(signed int) == 1 ? "byte" : "bytes");
    
    printf ("\n");
    
    /* print 100 times "-" */
    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n");

    printf ("\r\nTamanhos dos Tipos Basicos combinados com Modificadores de Largura\n");
    printf ("\n");

    printf ("\rshort int:%83lu %s\n", sizeof(short int), sizeof(short int) == 1 ? "byte" : "bytes");
    printf ("\rlong int:%84lu %s\n", sizeof(long int), sizeof(long int) == 1 ? "byte" : "bytes");
    printf ("\rlong long int:%79lu %s\n", sizeof(long long int), sizeof(long long int) == 1 ? "byte" : "bytes");
    printf ("\rlong double:%81lu %s\n", sizeof(long double), sizeof(long double) == 1 ? "byte" : "bytes");
    
    printf ("\n");
    
    /* print 100 times "-" */
    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n");

    printf ("\r\nTamanhos dos Tipos Basicos combinados com Modificadores de Sinal e com Modificadores de Largura\n");
    printf ("\n");

    printf ("\runsigned short int:%74lu %s\n", sizeof(unsigned short int), sizeof(unsigned short int) == 1 ? "byte" : "bytes");
    printf ("\rsigned short int:%76lu %s\n", sizeof(signed short int), sizeof(signed short int) == 1 ? "byte" : "bytes");
    printf ("\runsigned long int:%75lu %s\n", sizeof(unsigned long int), sizeof(unsigned long int) == 1 ? "byte" : "bytes");
    printf ("\rsigned long int:%77lu %s\n", sizeof(signed long int), sizeof(signed long int) == 1 ? "byte" : "bytes");
    printf ("\runsigned long long int:%70lu %s\n", sizeof(unsigned long long int), sizeof(unsigned long long int) == 1 ? "byte" : "bytes");
    printf ("\rsigned long long int:%72lu %s\n", sizeof(signed long long int), sizeof(signed long long int) == 1 ? "byte" : "bytes");
    
    printf ("\n");
    
    /* print 100 times "-" */
    for (index = 0; index < 100; index++) {
        printf ("-");
    }

    printf ("\n\n");

    return OK;
}

/* $RCSfile$ */
