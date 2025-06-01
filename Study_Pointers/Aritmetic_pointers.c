#include <stdio.h>
int twice_val(int *point1){
    return *point1 *=2;    
}
void div(int result,int *point1,int *point2){
    if(*point1 == 0 && *point2 ==0){
        printf("Division by zero");
    }
    else{
    result= *point1 / *point2;
    printf("Result: %i", result);
}
}

int sum(int *point1, int *point2){
    return *point1 + *point2;
}
int sub(int *point1, int *point2){
    return *point1 - *point2;
}

int main(void){
    int result, *point1,*point2,n1,n2,op;
   
    printf("-------------------------------------\n");
    printf("---Aritmetics with pointers---\n");
    printf("1)Double The value\n");
    printf("2)Division by two pointers\n");
    printf("3)Sub of two pointers\n");
    printf("4)Sum of two pointers\n");
    printf("-------------------------------------\n");
    printf("Select an option:\n");
        scanf("%i",&op);
        switch(op){
            case 1:
                printf("Double the value:\n");
                 printf("Enter The first Number:\n");
        scanf("%i", &n1);
            printf("Enter The Second Number:\n");
                scanf("%i", &n2);
    point1=&n1;
    point2=&n2;
                int twice;
                twice=twice_val(point1); 
                printf("The Double of the pointer 1 that has the value %i is: %i ",*point1,twice);
                break;
            case 2:
                printf("Division By Two Pointers:\n");
                 printf("Enter The first Number:\n");
        scanf("%i", &n1);
            printf("Enter The Second Number:\n");
                scanf("%i", &n2);
    point1=&n1;
    point2=&n2;
                div(result,point1,point2);
                break;
            case 3:
                printf("Subtraction of Two Pointers:\n");
                 printf("Enter The first Number:\n");
        scanf("%i", &n1);
            printf("Enter The Second Number:\n");
                scanf("%i", &n2);
    point1=&n1;
    point2=&n2;
                result= sub(point1,point2);
                printf("Result:%i",result);
                
                break;
            case 4:
                printf("Sum of two pointers:\n");
                 printf("Enter The first Number:\n");
        scanf("%i", &n1);
            printf("Enter The Second Number:\n");
                scanf("%i", &n2);
    point1=&n1;
    point2=&n2;
                result= sum(point1,point2);
                printf("Result:%i", result);
                
                break;
            default:
                    printf("Invalid selection!!!");
        }
        return 0;
}