#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main ( void )
{
   char num[20];
   char med[50]="C:\\Users\\Public\\Documents\\Trabalho\\Medicos\\medico";
   int i;
   FILE *fptr;
   for ( i = 1; i <= 11; ++i )
   {
      itoa(i,  num, 10);
      strcat(med,num);
      fptr = fopen(("%s",med),"w");
      fprintf(fptr,"ID:,NOME:,IDADE:,IDMED:,ESTADO:");
      fclose(fptr);
      med[49]=0;
   }
   return 0;
}
