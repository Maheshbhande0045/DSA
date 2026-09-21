#include <stdio.h>
#define MAX 5 

int stack[MAX];
int top = -1;

void push() {
    int value;
    
    if (top == MAX - 1) {
        printf("Stack Overflow! The stack is full.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        
        top++;                
        stack[top] = value;  
        printf("%d pushed to stack.\n", value);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Current Stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push();
    push();
    display();
    
    return 0;
}
