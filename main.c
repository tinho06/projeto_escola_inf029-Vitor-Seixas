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

int main(){
    
    disciplina d1[3];
    professor p1[3];
    aluno a1[3];
    int sair_cadastro = 0;
    int sair_menu = 0;
    int opcao_menu;
    int opcao_cadastro;
    int opcao_relatorio;
    int i = 0;
    int j = 0;
    int k = 0;

    while(!sair_menu){
        printf("menu:\n0- Cadastro\n1- Relatorios");
        scanf("%d", &opcao_menu);

        switch(opcao_menu){

            case 0:
                printf("0- Cadastro de aluno\n1- Cadastro de professor\n 2- Cadastro de disciplina 3- voltar\n");
                scanf("%d", &opcao_cadastro);
                
                switch(opcao_cadastro){
                    
                    case 0:
                        
                        printf("nome do aluno:\n");
                        scanf("%s", a1[i].nome_aluno);
                        printf("matricula do aluno:\n");
                        scanf("%d", &a1[i].matricula_aluno);
                        printf("cpf do aluno:\n");
                        scanf("%d", &a1[i].cpf_aluno);
                        i++;
                        break;
                
                    case 1:
                        
                        printf("nome do aluno:\n");
                        scanf("%s", p1[j].nome_prof);
                        printf("matricula do aluno:\n");
                        scanf("%d", &p1[j].matricula_prof);
                        printf("cpf do aluno:\n");
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
        
            case 1:

            /*menu de listar*/
            
            break;
        
        }
    
    }

}