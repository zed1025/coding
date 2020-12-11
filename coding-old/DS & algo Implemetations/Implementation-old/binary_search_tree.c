//Binary search tree implementation
/*
    The binary search tree can carry out the following operations
    👍1. traversing the binart tree - inorder, postorder, preorder
    👍2. finding the smallest element
    👍3. finding the largest element
    👍4. searching the binart tree for a specific element
    👍5. inserting a node into the binart tree
    6. deleting a node from the binary tree
    👍7. makeing a binary tree with a single node

*/


#include<stdio.h>
#include<stdlib.h>

//defining the node
struct bNode{
    int info;
    struct bNode *left;
    struct bNode *right;
    //struct bNode *father;
};
typedef struct bNode node;

node *newnode, *root, *z;

node* getnode(){
    newnode = (node*)malloc(sizeof(node));
    return newnode;
}

//Function: makenode() - allocates a nofe and sets it as the root of a single-node binary tree.
node* makenode(){
    node* p;
    int x;
    printf("Enter a value for the node: ");
    scanf("%d", &x);

    p = getnode();
    p->info =  x;
    p->left = NULL;
    p->right = NULL;
    //p->father = NULL;

    return p;
}
//end: makenode()

// //searching the binary tree
// void binSearch(node* root, int x){
//
// }
// //

//tree traversal
void treeTraversal(node* p){
    if (p != NULL){
        treeTraversal(p->left);
        printf("%d ", p->info);
        treeTraversal(p->right);
    }
}

void treeInsert(node* T, node* z){
    node* y, *x;
    y = NULL;
    x = T;
    while(x != NULL){
        y = x;
        if(z->info < x->info){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    if(z->info < y->info){
        y->left = z;
    }else{
        y->right = z;
    }

    return;
}

int treeMax(){
    node* x;
    x = root;
    while(x->right != NULL){
        x = x->right;
    }

    return x->info;
}

int treeMin(){
    node* x;
    x = root;
    while(x->left != NULL){
        x = x->left;
    }
    return x->info;
}

int treeSearch(node* p, int k){
    node* x;
    x = p;

    while((x != NULL) && (x->info != k)){
        if(k < x->info){
            x = x->left;
        }else{
            x = x->right;
        }

        if(x->info == k){
            return x->info;
        }else{
            return -1;
        }
    }

}

//treeDelete
void treeDelete(){

}


int main(){
    int choice, temp, num;
    // printf("Enter the value for the root of the tree:");
    // scanf("%d", &x);
    root = makenode();
    // printf("Select an option:\n");
    // printf("1 for inorder tree traversal.\n");
    // printf("2 for tree insertion.\n");
    // scanf("%d", &choice);
    do{
        printf("\nSelect an option:\n");
        printf("1 for inorder tree traversal.\n");
        printf("2 for tree insertion.\n");
        printf("3 for the maximum element.\n");
        printf("4 for the minimum element.\n");
        printf("5 for searching an element.\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:     //inorder tree traversal(recursive)
                treeTraversal(root);
                break;
            case 2:     //tree insert - inserting a new node at appropriate position
                z = makenode();
                treeInsert(root, z);
                break;
            case 3:     //treeMax
                printf("The current maximum element is %d.\n", treeMax());
                break;
            case 4:     //treeMin
                printf("The current minimum element is %d.\n", treeMin());
                break;
            case 5:     //treeSearch
                printf("What do you want to search?");
                scanf("%d", &temp);
                num = treeSearch(root, temp);
                if(num == -1){
                    printf("Not Found, %d", temp);
                }else{
                    printf("Found, %d", temp);
                }
                break;
            case 6:     //treeDelete

                break;
            default:
                printf("Invalid Input!\n");
                break;
        }
    }while(choice != -1);
}
