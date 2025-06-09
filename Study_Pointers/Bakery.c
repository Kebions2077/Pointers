#include <stdio.h>
FILE *data;

void read_data(void){
    data= fopen("dados.txt","r");
    if(data == NULL){
        printf("Access Denied");
    }
    fclose(data);
}
int main(void){
    read_data();
    return 0;
}