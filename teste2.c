#include <stdio.h>

#define CAPACIDADE 3

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

void cadastra_aluno(aluno a0[], int i1){

    printf("nome do aluno:\n");
    scanf("%s", a0[i1].nome_aluno);
    printf("matricula do aluno:\n");
    scanf("%d", &a0[i1].matricula_aluno);
    printf("cpf do aluno:\n");
    scanf("%d", &a0[i1].cpf_aluno);
    i1++;
    break;
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

void exclui_aluno(int exclusao_aluno0, int i2, aluno a2[]){
        
        int aux = 0;

        for(int i0 = exclusao_aluno0; i0 < i2; i0++){
            aux = a2[i0 + 1];
            a2[i0 + 1] = a[i0];
            a[i0] = aux; 
        }
            qtd--;
    }   

int valida_aluno(int i4){
    int nao_sei = 0;
    if(i4 == 0){
        nao_sei = 1; /*vazio*/
    }
    else if(i4 == CAPACIDADE){
        nao_sei = 2; /*cheio*/
    }
    return nao_sei;

}

void lista_aluno(aluno a2[], int i3){

    int cont = 0;
    if (i3 == 0){
        printf("nenhum aluno cadastrado");
    
    }
    
    else{

        for (int limite = 0; limite < i3; limite ++ ){
            printf("%d- %s\n%d\n%d\n\n", cont, a2[limite].nome_aluno, a2[limite].cpf_aluno, a2[limite].matricula_aluno);
            cont++;
        }

    }


}

int main(){

    disciplina d1[CAPACIDADE];
    professor p1[CAPACIDADE];
    aluno a1[CAPACIDADE];
    int opcao_menu;
    int opcao_cadastro_aluno;
    int opcao_cadastro;
    int atualizacao_aluno;
    int exclusao_aluno;
    int aluno_valido;
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
                        printf("0- incluir aluno\n1- atualizar aluno\n2- excluir aluno:\n");
                        scanf("%d", &opcao_cadastro_aluno);
                        switch(opcao_cadastro_aluno){
                        
                            case 0:
                                cadastra_aluno(a1, ii);
                                ii++;
                                break;

                            case 1:
                                printf("digite o numero correspondente ao aluno que deseja atualizar:\n")
                                lista_aluno(a1, ii);
                                scanf("%d", &atualizacao_aluno);
                                cadastra_aluno(a1, atualizacao_aluno);

                            case 2:
                                printf("digite o numero correspondente ao aluno que deseja excluir:\n");
                                lista_aluno(a1, ii);
                                scanf("%d", &exclusao_aluno);
                                exclui_aluno(exclusao_aluno, ii, a1);
                                break;
                        }
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
