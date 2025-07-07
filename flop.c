#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char const *argv[])
{
    char string[100];
    FILE *fptr;
    fptr = fopen("paciente.txt","r");
    fgets(string, 100, fptr);
    fclose(fptr);
    printf("%s",string); 
}
