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
void gestaopac(PACIENTE pac[]){
    int num;
    printf("Você escolheu gestão de pacientes! Escolha o que deseja fazer\n\n 1 -- CADASTRAR PACIENTE\n 2 -- CONSULTAR ID\n 3 -- ATUALIZAR PACIENTE\n 4 -- EXCLUIR PACIENTE");
    switch (num)
    {
    case 1:
        break;
    
    default:
        break;
    }
}
void gestaomed(MEDICO med[]){
    int num;
    printf("Você escolheu gestão de médicos! Escolha o que deseja fazer\n\n 1 -- CADASTRAR MÉDICO\n 2 -- CONSULTAR ID\n 3 -- ATUALIZAR MÉDICO\n 4 -- EXCLUIR MÉDICO");
    switch (num)
    {
    case 1:
        break;
    
    default:
        break;
    }
}
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
