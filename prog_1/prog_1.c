#include<stdio.h>
#include<stdio.h>
#include<string.h>
# define size 20

char stack[size];
int top = -1;

void push(char x){
    if(top == size-1){
        printf("stack is full!");
        return;
    }
    else{
        stack[++top]=x;
    }
}

void pop(){
    if(top == -1){
        printf("stack underflow!");
        return;
    }
    else{
        return stack[top--];
    }
}

void main(){
    char exp[20];
    printf("Enter the expression: ");
    scanf(exp);

}