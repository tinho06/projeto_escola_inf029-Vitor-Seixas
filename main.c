#include <stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
    
    }data;

typedef struct aluno{
    int cpf;
    int matricula;
    char nome_a [60];
    data nascimento_aluno;

    }aluno;

typedef struct professor{
    int cpf;
    int matricula;
    char nome_p [60];
    data nascimento_prof;
    
    }professor;

typedef struct disciplina{
    int codigo;
    int semestre;
    char nome_dis [60];
    professor prof_da_disciplina;
    
    }disciplina;

int main(){
    
    aluno a1[3];
    int sair_cadastro = 0;
    int sair_menu = 0;
    int opcao_menu;
    int opcao_cadastro;
    int opcao_relatorio;
    int i = 0;

    while(!sair_menu){
        printf("menu:\n0- Cadastro\n1- Relatorios");
        scanf("%d", &opcao_menu);

        switch(opcao_menu){

            case 0:
                printf("0- Cadastro de aluno\n1- Cadastro de professor\n 2- Cadastro de disciplina");
                scanf("%d", &opcao_cadastro);

                switch(opcao_cadastro){
                    
                    case 0:
                        
                        while(i < 3 || !sair_cadastro){
                            printf("nome do aluno:\n");
                            scanf("%[^\n]", &a1[i].nome_a);
                        }
                }

        }
        
    }
    
}