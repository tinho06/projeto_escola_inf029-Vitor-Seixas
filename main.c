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
    
    int sair = 0;

    while(!sair){
        printf("menu:\n0- Cadastro\n1- Relatorios");
        
    }
    
}