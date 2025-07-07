#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void main ()
{
   char num[500];
   int nume = 0;
   FILE *fptr;
   fptr = fopen("C:\\Users\\Public\\Documents\\Trabalho\\Medicos\\medico","r");
   printf("Teste\n");
   while(fgets(num,500,fptr)){
    nume++;
   }
   fclose(fptr);
}