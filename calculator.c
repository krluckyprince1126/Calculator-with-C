#include<stdio.h>
void add(int a,int b);
void subtract(int a,int b);
void multiply(int a,int b);
void divide(int a, int b);
void module(int a, int b);



int main(){
    int choice;
    int a,b;

    do{
        printf("_________CALCULATOR__________\n");
        printf("1. Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Module\n6.Exit\n");
        printf("");
        printf("Enter your choice :");
        scanf("%d",&choice);
        

        if (choice>=1 && choice<=5){
            printf("Enter your first number :");
            scanf("%d",&a);
            printf("Enter your second number :");
            scanf("%d",&b);
            }
        switch (choice)
        {
        case 1:
            add(a,b);
            break;
        case 2:
            subtract(a,b);
            break;
        case 3:
            multiply(a,b);
            break;
        case 4:
            divide(a,b);
            break;
        case 5:
            module(a,b);
            break;
        case 6:
            printf("Exiting the program");
            break;      
        default:
            printf("Invalid choice");
        }}
    while (choice !=6);
    
        return 0;
    
        
    }




void add(int a,int b){
        printf("Result=%d\n",a+b);
    }
void subtract(int a,int b){
        printf("Result=%d\n",a-b);
    }
void multiply(int a,int b){
        printf("Result=%d\n",a*b);
    }
void divide(int a, int b){
    if(b==0){
        printf("Cannot divide by Zero .");
    }
    else
    printf("Result=%d",a/b);
    }
void module(int a, int b){
    printf("Result=%d\n",a%b);
    }
