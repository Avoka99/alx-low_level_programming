#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

int _putchar(char c);

void print_uppercase(char *name);

void print_lowercase(char *name);

#endif
