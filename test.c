#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
int main ( void )
{
   srand(time(NULL));
   char num[20];
   char med[50]="C:\\Users\\Public\\Documents\\Trabalho\\Medicos\\medico";
   int id;
   int idade;
   int idmed;
   int estado;
   FILE *fptr;
   for (int i = 1; i <= 10; ++i )
   {
      id = rand()%8999+1000;
      idade = rand()%99+1;
      idmed = rand()%8999+1;
      estado = rand()%3+1;
      itoa(i,  num, 10);
      strcat(med,num);
      fptr = fopen(("%s",med),"w");
      fprintf(fptr,"ID:%d,NOME:Jose,IDADE:%d,IDMED:%d,ESTADO:%d",id,idade,idmed,estado);
      fclose(fptr);
      med[49]=0;
   }
   return 0;
}
