#include <stdio.h>
#include<string.h>

struct data{
int age;
char name[30], surname[30], street[30], neighborhood[30];
long int phone,cpf;
};
struct data person1;

void input_user(void){
printf("---Registration of data---\n");
printf("Enter Your Name:\n");
fflush(stdin);
fgets(person1.name,30,stdin);
printf("Last Name:\n");
fflush(stdin);
fgets(person1.surname,30,stdin);
printf("Age:\n");
scanf("%i", &person1.age);
printf("Phone:\n");
scanf("%li",&person1.phone); 
printf("CPF:\n");
scanf("%li", &person1.cpf);
printf("Street:\n");
fflush(stdin);
fgets(person1.street,30,stdin);
printf("Neighborhood:\n");
fflush(stdin);
fgets(person1.neighborhood,30,stdin);
}
void file(void){
    FILE *text;
        text= fopen("User_Data.txt","w");
    fprintf(text,"-----User_Data-----\n");
    fprintf(text,"Complete Name: %s,%s\n", person1.surname,person1.name);
    fprintf(text,"Age:%i\n",person1.age);
    fprintf(text,"Phone:%li\n", person1.phone);
    fprintf(text,"CPF:%li",person1.cpf);
    fprintf(text,"Street Address:%s\n",person1.street);
    fprintf(text,"Neighbornhood:%s\n",person1.neighborhood);
    fprintf(text,"------------------------\n");
        fclose(text);

    if (text ==NULL){
        printf("Acess Denied!!\n");
    }
    
    

}
int main (void){
    input_user();
    file();
    return 0;
}



    
