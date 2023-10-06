#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void print_elf_header_info(Elf64_Ehdr *header);
int copy_file(const char *file_from, const char *file_to);

#endif

