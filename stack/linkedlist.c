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
node * insert(node * first,int posn, int ele);
node * insert_to_a_sorted_linked_list(node * start,int ele);
int main() {
    node * start;
    start = (node *)malloc(sizeof(node));
    printf("enter the elements\n\n");
    create(start); 
    printf("wait \n\n");
    displayit(start);
    recursivedisp(start);
    printf("recursive-reverse\n\n");
    recursivereverse(start);
    start = insert(start,0,0);
    displayit(start);
    start = insert(start,1,2);
    printf("---");
    displayit(start);
    printf("hi");
    start = insert_to_a_sorted_linked_list(start,3);
    displayit(start);
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
node * insert(node * first,int posn, int ele){
    node * follow_f; //follow fast follow slow
    if (posn == 0)
    {
    follow_f = (node *)malloc(sizeof(node));
    follow_f->data = ele;
    follow_f->next = first;
    first = follow_f;return first;
    }
    else{
        node * first_1 = first;
        node * value = (node *)malloc(sizeof(node));
        value->data = ele;
        for(int i=0;i<posn-1;i++){
            first=first->next; 
        }
        value->next = first->next;
        first->next = value;
        return first_1;
    }
}
node * insert_to_a_sorted_linked_list(node * start, int ele){
    int value = 0;
    node * val_1 = start;
    while(start->next != NULL){
        if (start->data < ele)
                value += 1;
        start = start->next;
        
}return insert(val_1,value,ele);
}
node * circular_linked_list
