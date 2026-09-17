#include <stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
    
    }data;

typedef struct aluno{
    int cpf_aluno;
    int matricula_aluno;
    char nome_aluno [60];
    data nascimento_aluno;

    }aluno;

typedef struct professor{
    int cpf_prof;
    int matricula_prof;
    char nome_prof [60];
    data nascimento_prof;
    
    }professor;

typedef struct disciplina{
    int codigo;
    int semestre;
    char nome_dis [60];
    professor prof_da_disciplina;
    
    }disciplina;

void cadastra_aluno(int op, aluno a0[]){
    
    int i = 0;
    
    scanf("%d", &op);   
    printf("nome do aluno:\n");
    scanf("%s", a0[i].nome_aluno);
    printf("matricula do aluno:\n");
    scanf("%d", &a0[i].matricula_aluno);
    printf("cpf do aluno:\n");
    scanf("%d", &a0[i].cpf_aluno);
    i++;
    break;
                
                    case 1:
                        
                        printf("nome do professor:\n");
                        scanf("%s", p1[j].nome_prof);
                        printf("matricula do professor:\n");
                        scanf("%d", &p1[j].matricula_prof);
                        printf("cpf do professor:\n");
                        scanf("%d", &p1[j].cpf_prof);
                        j++;
                        break;
                        
                
        
                    case 2:

                        printf("nome da disciplina:\n");
                        scanf("%s", d1[k].nome_dis);
                        printf("codigo da disciplina:\n");
                        scanf("%d", &d1[k].codigo);
                        printf("semestre da disciplina:\n");
                        scanf("%d", &d1[k].semestre);
                        k++;
                        break;

                }
}
int main(){

    disciplina d0[3];
    professor p0[3];
    aluno a0[3];
    int opcao_menu;
    int opcao_cadastro;
    int sair_menu = 0;

    while(!sair_menu){
        printf("menu:\n0- Cadastro\n1- Relatorios:\n2- sair");
        scanf("%d", &opcao_menu);

        switch(opcao_menu){

            case 0:
                printf("0- Cadastro de aluno\n1- Cadastro de professor\n 2- Cadastro de disciplina 3- voltar\n");
                scanf("%d", &opcao_cadastro);
                menu_cadastro(opcao_cadastro);
                break;
        
        }
    
    return 0;

}


