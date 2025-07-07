#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int medcount ()
{
   char num[500];
   int nume = 0;
   FILE *fptr;
   fptr = fopen("C:\\Users\\Public\\Documents\\Trabalho\\Medicos\\medico","r");
   while(fgets(num,500,fptr)){
    nume++;
   }
   fclose(fptr);
   return nume;
}
void main ()    
{
   int nummed = medcount();
   int id;
   int idade;
   int idmed;
   int estado;
   printf("%d",nummed);
   FILE *fptr;
   fptr = fopen("C:\\Users\\Public\\Documents\\Trabalho\\Medicos\\medico","a");
   for (int i = 1; i <= 10; ++i )
   {
      nummed+=i;
      id = rand()%8999+1000;
      idade = rand()%99+1;
      idmed = rand()%8999+1000;
      estado = rand()%3+1;
      fprintf(fptr,"MEDICO%d: ID:%d,NOME:Jose,IDADE:%d,IDMED:%d,ESTADO:%d\n",nummed,id,idade,idmed,estado);
      nummed-=i;
   }
   fclose(fptr);
}
