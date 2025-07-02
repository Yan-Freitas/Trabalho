#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct paciente
{
    int id;
    char nome[30];
    int cpf;
    int idade;
    int idmed;
    int estado;
}PACIENTE;
typedef struct medico
{
    int id;
    char nome[30];
    int crm;
    bool plantao;
}MEDICO;

int main()
{
    setlocale(LC_ALL,"");
    int num;
    printf("Olá, escolha uma das opções ou feche o programa\n\n 1 -- GESTÃO DE PACIENTES\n 2 -- GESTÃO DE MÉDICOS\n 3 -- FILA DE ATENDIMENTO\n 4 -- SAIR DO SISTEMA\n");
    scanf("%d",&num);
    while(true){
        switch (num)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("Número inválido!");
            break;
        }
    }
    return 0;
}
