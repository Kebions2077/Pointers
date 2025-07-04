#include<stdio.h>
#include <string.h>
FILE *arquivo;
int qnt_total;
struct lote{
    int qtn_lotes;
    char validade[30];
};
struct farmacia{
    char nome[30];
    int codigo;
    struct lote info;
};
    struct farmacia remedio[5];
void cadastro(void){
    int x;
    for(x=0;x<5;x++){
        printf("Digite o nome do medicamento:\n");
        scanf("%s",  remedio[x].nome);
        printf("Digite o codigo do medicamento\n");
        scanf("%i",& remedio[x].codigo);
        printf("Digite Data de validade do medicamento:\n");
        scanf("%s", remedio[x].info.validade);
        printf("Digite o numero de lotes do medicamento:\n");
        scanf("%i",& remedio[x].info.qtn_lotes);
    }
   

}
void escrita(void){
   
    arquivo=fopen("Base_De_Dados.txt","a");
    if(arquivo==NULL){
        printf("Sem Permissao!!\n");
        return;
    }
    int y;
    for(y=0;y<5;y++){
        fprintf(arquivo,"-----------------------------------\n");
        fprintf(arquivo,"Nome:%s\n",remedio[y].nome);
        fprintf(arquivo,"Codigo:%i\n", remedio[y].codigo);
        fprintf(arquivo,"Data de Validade:%s\n", remedio[y].info.validade);
        fprintf(arquivo,"Lotes Disponiveis:%i", remedio[y].info.qtn_lotes);
        fprintf(arquivo,"-----------------------------------\n");
    }
     qnt_total=  remedio[0].info.qtn_lotes +  remedio[1].info.qtn_lotes +  remedio[2].info.qtn_lotes +  remedio[3].info.qtn_lotes +  remedio[4].info.qtn_lotes;
    fprintf(arquivo,"Numero de medicamentos cadastrados:%i",qnt_total);
    fclose(arquivo);
    
}
void exibir(void){
    int e;
    for(e=0;e<5;e++){
        printf("----------------------------\n");
        printf("Medicamento %i", e+1);
        printf("Nome:%s\n", remedio[e].nome);
        printf("Codigo:%i\n",remedio[e].codigo);
        printf("Validade:%s\n", remedio[e].info.validade);
        printf("Quantidade de Lotes Disponiveis:%i\n", remedio[e].qnt_lotes);
        printf("Quantidade Total Do medicamento:%i\n", qnt_total);
        printf("----------------------------\n");

    }
}

int main(void){
    cadastro();
    escrita();
    exibir();
    return 0;
}