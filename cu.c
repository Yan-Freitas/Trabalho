#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char pac[] = "C:\\Users\\Public\\Documents\\Trabalho\\Pacientes\\paciente";
    const char *buffer;
    int cont = 0;
    int buf = 0;
    FILE *fptr;
    printf("Gostaria de registrar quantos pacientes?");
    scanf("%d",&cont);
    printf("%d\n",cont);
    setbuf(stdin,NULL);
    for (int i = 0; i < cont; i++)
    {
        buf = i+1;
        buffer = "%d",buf;
        printf("%c",buffer);
        strcat(pac,buffer);
        fptr = fopen(("%s",pac),"w");
        fprintf(fptr,"ID:,NOME:,IDADE:,IDMED:,ESTADO:");
        fclose(fptr);
    }
}
