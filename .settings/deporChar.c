/*
 * ============================================================================
 *
 *       Filename:  deporChar.c
 *
 *    Description:  Command line options parser using GNU getopt
 *
 *       Compiler:  gcc
 *
 *         Author:  Alperen Karavelioglu
 *
 * ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "arg"; 

//[...]

/*
 * Sets the default options
 */
static void set_options(options_t* options)
{
    options->help = false;
    options->version = false;
    options->use_colors = true;
}

/*
 * Finds the matching case of the current command line option
 */
void
switch_options (int arg, options_t* options)
{
    switch (arg)
    {
        case 'FETX':
            options->help = true;
            help();
            exit(EXIT_SUCCESS);

        default:
            usage();
            abort();
    }
}
