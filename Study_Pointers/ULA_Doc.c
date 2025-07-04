#include <stdio.h>

void print_txt(void){
    FILE *doc;
    doc= fopen("C:\Users\kevin\Desktop\Ula_Documentação.txt", "w");
    if(doc == NULL){
        printf("Access Denied");
        return;
    }
    fprintf(doc,"----------Documentação------------\n");
    fprintf(doc,"---Ula de Duas entradas e 4bits---");
    fprintf(doc,"Operações realizadas pela ULA:\n");
    fprintf(doc,"1)Soma\n");
    fprintf(doc,"2)Subtração\n");
    fprintf(doc,"3)Comparação\n");
    fprintf(doc,"4)Multiplicação\n");
    fprintf(doc,"----------------------------------\n");
    fprintf(doc,"Funcionamento do Seletor:\n");
    fprintf(doc,"Decidi fazer a implementação '[xxxx][xxxx]' porque não estava conseguindo fazer a implementação '[xx]'\n");
    fprintf(doc,"pois estava dando erro de numero de bits\n");
    fprintf(doc,"Achei essa solução pois no final o funcionamento é o mesmo pois tres bits viram don't care [xxx0] [xxx0]\n"); 
    fprintf(doc,"fazendo assim o mesmo funcionamento de [00]\n");
    fprintf(doc,"--------------------------------------------------------------------------------------------------------\n");
    fprintf(doc,"Codificação binaria das Operações:\n");
    fprintf(doc,"Soma= [xxx0][xxx0]\n");
    fprintf(doc,"Subtração= [xxx0][xxx1]\n");
    fprintf(doc,"Comparação= [0001][0000]\n");
    fprintf(doc,"Multiplicação= [0001][0001]");
    fprintf(doc,"----------------------------------------------------------------------------------\n");
   
    fprintf(doc,"Funcionamento das Operação aritmeticas:\n");
    fprintf(doc,"---Comparador---\n");
    fprintf(doc,"Se o bit correspondendo tanto da A e B forem iguais, a posição na saida será 1\n");
    fprintf(doc,"caso contrario a saída será 0");


}