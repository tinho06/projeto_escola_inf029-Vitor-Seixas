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
    professor prof_da_disciplina[3];

    }disciplina;

void cadastra_aluno(aluno a0[], int i){
    
       
    printf("nome do aluno:\n");
    scanf("%s", a0[i].nome_aluno);
    printf("matricula do aluno:\n");
    scanf("%d", &a0[i].matricula_aluno);
    printf("cpf do aluno:\n");
    scanf("%d", &a0[i].cpf_aluno);
    i++;
}                

void cadastra_professor(professor p0[], int j){
    

    printf("nome do professor:\n");
    scanf("%s", p0[j].nome_prof);
    printf("matricula do professor:\n");
    scanf("%d", &p0[j].matricula_prof);
    printf("cpf do professor:\n");
    scanf("%d", &p0[j].cpf_prof);
    j++;
}                        
                
void cadastra_disciplina(disciplina d0[], int k){

    printf("nome da disciplina:\n");
    scanf("%s", d0[k].nome_dis);
    printf("codigo da disciplina:\n");
    scanf("%d", &d0[k].codigo);
    printf("semestre da disciplina:\n");
    scanf("%d", &d0[k].semestre);
    k++;
        
}

int main(){

    disciplina d1[3];
    professor p1[3];
    aluno a1[3];
    int opcao_menu;
    int opcao_cadastro;
    int sair_menu = 0;
    int ii = 0;
    int jj = 0;
    int kk = 0;


    while(!sair_menu){
        printf("menu:\n0- Cadastro\n1- Relatorios:\n2- sair\n");
        scanf("%d", &opcao_menu);

        switch(opcao_menu){

            case 0:
                printf("0- Cadastro de aluno\n1- Cadastro de professor\n2- Cadastro de disciplina\n3- voltar\n");
                scanf("%d", &opcao_cadastro);
                
                switch(opcao_cadastro){
                    case 0:
                        
                        cadastra_aluno(a1, ii);
                        ii++;
                        break;

                    case 1:
                        
                        cadastra_professor(p1, jj);
                        jj++;
                        break;

                    case 2:

                        cadastra_disciplina(d1, kk);
                        kk++;
                        break;

                }
                break;
        
            case 2:
            sair_menu = 1;
            break;
        }

    }

    return 0;

}
