#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#define SIZE 200

int main(void)
{                                                           system("color 1F");
    char usuario[7] = "adm";
    char usuario1[7];
    char senha[7] = "123";
    char senha1[7];
    char liberadoacesso;
    int descobreidade;
    int pacienterisco = 0;

struct paciente
{
    int  dia, mes, ano;
    char nome[SIZE], cpf[SIZE], telefone[SIZE], email[SIZE];
    char rua[SIZE], numero[SIZE], bairro[SIZE], cidade[SIZE], estado[SIZE], cep[SIZE];
    char comorbidade[15], diag[SIZE], especifica[SIZE];
};

struct paciente nv;

    int anoAtual;
    time_t data_ano;
    time(&data_ano);

void paciente()
{};

    struct tm * data = localtime(&data_ano);
    anoAtual = (data -> tm_year+1900);

    printf("\n\n");
    printf ("\t\t\t================================\n");
    printf ("\t\t\t|                              |\n");
    printf ("\t\t\t|  -------- SISCOV19 --------  |\n");
    printf ("\t\t\t|                              |\n");
    printf ("\t\t\t=============By HMT=============\n\n");
    printf ("\t\t\t Entre com seus dados de acesso \n");
    printf("\n\n");
    printf("\t\t\t   Nome de usuario: ");
    fflush(stdin);
    gets(usuario1);

if (strcmp(usuario, usuario1) == 0)
{
        printf("\n\n");
        printf("\t\t\t   Senha: ");
        fflush(stdin);
        gets(senha1);
        system("cls");

        if (strcmp(senha, senha1) == 0)
{
                   printf("\n\n");
                   printf("\t\t\t===============================\n");
                   printf("\t\t\t|       USUARIO  LOGADO       |\n");
                   printf("\t\t\t===============================\n\n\n");
printf("------------------------ Entre com os dados do Paciente ------------------------\n\n");
                    paciente(paciente);
                    liberadoacesso = 'S';
}
else
{
            printf("\n\t\t\tDados incorretos, tente novamente!\n\n");
}
}
        else
{
                printf("\n\t\t\tDados incorretos, tente novamente!\n\n");
}
if (liberadoacesso == 'S')
{
        FILE *ponteiroArquivo;
        ponteiroArquivo=(fopen("ListaPacientes.txt", "a"));
        printf("\n\t\tNome completo: ");
        fgets(nv.nome, 200, stdin);
        printf("\t\tCPF/CIC/RG: ");
        fgets(nv.cpf, 200, stdin);
        printf("\t\tTel/Cel: ");
        fgets(nv.cpf, 200, stdin);
        fflush(stdin);
        printf("\n\t\tEndereço Completo");
        printf("\n\t\tRua/Av: ");
        fgets(nv.rua, 200, stdin);
        printf("\t\tNumero/Complemento: ");
        fgets(nv.numero, 200, stdin);
        printf("\t\tBairro: ");
        fgets(nv.bairro, 200, stdin);
        printf("\t\tCidade: ");
        fgets(nv.cidade, 200, stdin);
        printf("\t\tEstado: ");
        fgets(nv.estado, 200, stdin);
        printf("\t\tCEP: ");
        fgets(nv.cep, 200, stdin);
        fflush(stdin);
        printf("\n\t\tDia do nascimento");
        printf("\n\t\tDia Ex: ( DD ): ");
        scanf("%d", &nv.dia);
        printf("\t\tMes Ex: ( MM ): ");
        scanf("%d", &nv.mes);
        printf("\t\tAno Ex: ( AAAA ): ");
        scanf("%d", &nv.ano);
        fflush(stdin);
        printf("\t\tE-mail: ");
        fgets(nv.email, 200, stdin);
        printf("\n\t\tData do diagnostico");
        printf("\n\t\tEx: ( DD.MM.AAAA ): ");
        scanf(" %s", &nv.diag);
        printf("\t\tPossui comorbidade? \n\t\tDigite 1 ( Sim ) ou 0 ( Nao ): ");
        scanf("%d", &pacienterisco);
        setbuf(stdin, NULL);

if(pacienterisco == 1)
{
            strcpy(nv.comorbidade, "SIM");
            printf("\t\tEspecifique: ");
            fgets(nv.especifica, 200, stdin);
}
else
{
            strcpy(nv.comorbidade, "NÃO");
            strcpy(nv.especifica, "Nenhum");
}
        printf("\n");
        fprintf(ponteiroArquivo, "\nNome Completo: %s", nv.nome);
        fprintf(ponteiroArquivo, "\nCPF/CIC/RG: %s", nv.cpf);
        fprintf(ponteiroArquivo, "\nTel/Cel: %s", nv.telefone);
        fprintf(ponteiroArquivo, "\nRua/Av: %s", nv.rua);
        fprintf(ponteiroArquivo, "\nNúmero/Complemento: %s", nv.numero);
        fprintf(ponteiroArquivo, "\nBairro: %s", nv.bairro);
        fprintf(ponteiroArquivo, "\nCidade: %s", nv.cidade);
        fprintf(ponteiroArquivo, "\nEstado: %s", nv.estado);
        fprintf(ponteiroArquivo, "\nCEP: %s", nv.cep);
        fprintf(ponteiroArquivo, "\nData de nascimento: %d/%d/%d", nv.dia, nv.mes, nv.ano);
        fprintf(ponteiroArquivo, "\nEmail: %s", nv.email);
        fprintf(ponteiroArquivo, "\nData do diagnostico: %s", nv.diag);
        fprintf(ponteiroArquivo, "\nPossui Comorbidade? %s", nv.comorbidade);
        fprintf(ponteiroArquivo, "\nEspecificacao da comorbidade: %s", nv.especifica);
        descobreidade = anoAtual - nv.ano;

        printf("\n\n");
        printf("\t\t--------------------------------------------------\n");
        printf("\t\t|         Paciente fora do grupo de risco         |\n");
        printf("\t\t--------------------------------------------------\n\n\n");
        printf("\t\t                CADASTRO CONCLUIDO!               \n\n");
        printf("\t\t   PRESSIONE [ ENTER ] PARA ENCERRAR O PROGRAMA   \n\n");

printf("\n\n");
printf("--------------------------------------------------------------------------------\n");
printf("------------------------------------ SISCOV19 ----------------------------------\n");
printf("--------------------------------------------------------------------------------\n");
printf("                              Sistem . by HMT (2021)                            \n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

if (descobreidade > 65 || pacienterisco == 1)
{
            FILE *ponteiroRisco;
            ponteiroRisco=(fopen("PacientesRisco.txt", "a"));
            fprintf(ponteiroRisco, "\nCEP: %s", nv.cep);
            fprintf(ponteiroRisco, "\nIdade: %d\n", descobreidade);
            printf("\n\n");
            printf("\t\t--------------------------------------------------\n");
            printf("\t\t|     Paciente pertencente ao grupo de risco     |\n");
            printf("\t\t| O caso sera enviado para a Secretaria de Saude |\n");
            printf("\t\t--------------------------------------------------\n\n\n");
            printf("\t\t                CADASTRO CONCLUIDO!               \n\n");
            printf("\t\t   PRESSIONE [ ENTER ] PARA ENCERRAR O PROGRAMA   \n\n");

printf("\n\n");
printf("--------------------------------------------------------------------------------\n");
printf("------------------------------------ SISCOV19 ----------------------------------\n");
printf("--------------------------------------------------------------------------------\n");
printf("                              Sistem . by HMT (2021)                            \n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

fclose(ponteiroRisco);
}
fclose(ponteiroArquivo);
}
}
