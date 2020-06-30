#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node node;
struct node{
    int data;
    node * next;
};
void create(node * first);
void displayit(node * first);
void recursivedisp(node * first);
void recursivereverse(node * first);
int main() {
    node * start;
    
    start = (node *)malloc(sizeof(node));
    printf("enter the elements\n\n");
    create(start); 
    printf("wait the fuck\n\n");
    displayit(start);
    recursivedisp(start);
    printf("recursive-reverse\n\n");
    recursivereverse(start);
    return (EXIT_SUCCESS);
}
void create(node * first){
        scanf("%d",&first-> data);
        fflush(stdin);
        first->next = NULL;
        while(first->data != -1){
        (first-> next) = (node *)malloc(sizeof(node));
        scanf("%d",&first->next->data);
        fflush(stdin);
        if(first->next->data == -1) {
        break;}
        first = (first->next);
        (first->next) = NULL;
        }

    }

void displayit(node * first){
    register int i;
    printf("hey\n");
    while(first->next!= NULL){
        fflush(stdin);
        printf("answer %d %d \n",i++,first->data);
        first = first->next;
    }
}


void recursivedisp(node * first){
    if(first->next != 0){
    printf("%d\n",first->data);
    first = first->next;
    recursivedisp(first);}
}

void recursivereverse(node * first)
{
    if(first != NULL){
        recursivereverse(first->next);
        if (first->data != -1)
                printf("%d",first->data);
    }
}