// This Program is for 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of stack ");
    scanf("%d",&n);
    int stack[n-1];
    int TOP=-1;
    int c,num;
    while (1) 
    {
        printf("\nEnter 1 for Push an element in the Stack\nEnter 2 for POP an element in the Stack\nEnter 3 for Display the Stack\nEnter 4 for EXIT \n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:// top
            if (TOP==n-1){
                printf("Stack is full");
                break;
            }else{
            TOP=TOP+1;
            printf("Enter the Element : ");
            scanf("%d",&stack[TOP]);
            break;}
        case 2://pop
            if (TOP==-1)
            {
                printf("Stack is Empty ");
                break;
            }else{
            printf("%d",stack[TOP]);
            TOP=TOP-1;
            break;
            }
        case 3: 
            if (TOP==-1)
                {
                    printf("Stack is Empty ");
                    break;
                }else{
            for (int i = TOP; i>=0; i--)
            {
                printf("\t%d\n",stack[i]);
            }
            break;
                }
        default:
            exit(0);
            break;
        }
    }
    return 0;
}