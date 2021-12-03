/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: um programa que receba um nome que possa conter caracteres de espaço e que tenha no máximo 50 caracteres.

$Author$
$Date$
$Log$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK                          0
#define INVALID_NUM_ARGUMENT        1
#define INVALID_ARGUMENT            2

#define NUM_ARGUMENTS               2
#define MAX_NAME_LENGTH             50
#define EOS                         '\0'

int
main(int argc, char **argv)
{
    /* \/ Variables Declaration \/ */
    unsigned index;

    /* \/ Error treatment \/ */
    if (argc != NUM_ARGUMENTS) {
        printf ("\"Use: %s <name>\"\n", argv[0]);
        exit (INVALID_NUM_ARGUMENT);
    }

    if (strlen(argv[1]) > MAX_NAME_LENGTH) {
        printf ("Name length: %u\n", (unsigned) strlen(argv[1]));
		printf ("Name must have maximum length of 50 characters\n");
		exit (INVALID_ARGUMENT);
    }

    for (index = 0; argv[1][index] != EOS; index++) {
        if (((argv[1][index] <= ' ') && (argv[1][index] >= 'z')) ||
            ((argv[1][index] >= '!') && (argv[1][index] <= '@')) ||
            ((argv[1][index] >= '[') && (argv[1][index] <= '`')))
        {
            printf ("\"First invalid character: %c\"\n", argv[1][index]);
			printf ("Write just names, no numbers or special characters\n");
			exit (INVALID_ARGUMENT);
        }
    }

    /* \/ main functionality \/ */
    printf ("\n");
    
    /* print spaces to center name on screen*/
    for (index = 0; index < (80 - strlen(argv[1])) / 2; index++) {
        printf (" ");
    }

    printf ("\"%s\"", argv[1]);
    printf ("\n\n");
    
    /* print 80 time "-" */
    for (index = 0; index < 80; index++) {
        printf ("-");
    }

    printf ("\n\n");

    return OK;
}

/* $RCSfile$ */
