#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
    int value;
    node * right;
    node * left; 
};
typedef struct node node;
void add(node * root,int val);
int main(){

    node * root;
    root = (node *) malloc(sizeof(node));
    (root)->left = NULL;
    (root)->right = NULL;
    (root)->value = -1;
    int val[] = {1,2,3};
    for (int i = 0;i<3;i++){
        add(root,val[i]);
    }
    printf("%d", root->value);
    printf("%d", root->right->value);
    printf("thanks");
    return 0;
}
void add(node * root,int val){
    if( (root)->value == -1)
    {
        (root)->value = val;
        (root)->right= NULL;
    (root)->left= NULL; 

    }
    else{
        if(root->value <val){
        if (root->right != NULL)
        {
            add(root->right,val);
        }
        else
        {
            root->right = (node *) malloc(sizeof(node));
            (root->right)->value = val;
            (root->right)->left = NULL;
            (root->right)->right = NULL;
        }
        }
        if(root->value >val){
        if (root->right != NULL)
        {
            add(root->left,val);
        }
        else
        {
            root->left = (node *) malloc(sizeof(node));
            (root->left)->value = val;
            (root->left)->left = NULL;
            (root->left)->right = NULL;
        }
        }
}
}