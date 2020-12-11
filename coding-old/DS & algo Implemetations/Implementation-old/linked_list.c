#include<stdio.h>
#include<stdlib.h>

//declaring the structure node
struct list{
  int info;
  struct list *next;
};
typedef struct list node;

node *temp = NULL, *last = NULL, *first = NULL;
node *new;
//node *root = NULL;


//Function: getnode - creates a new node and returns a pointer to the node
node* getNode(int x){
  new = (node*) malloc (sizeof(node));
  new->next = NULL;
  new->info = x;
  return new;
}



/*
//Function: freenode - frees momory allocated to a node
void freeNode(node *p){
  free(p);
}
*/

//Function: addFront - adds a node at the front of the linked list
void addFront(){
  int x;
  printf("Enter a value: ");
  scanf("%d", &x);

  //new = getNode();
  new = getNode(x);
  if(first == last && first == NULL){
    first = last = new;
    first->next = NULL;
    last->next = NULL;
  }else{
    temp = first;
    first = new;
    first->next = temp;
  }
}

//Function: addLast
void addLast(){
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);

  new = getNode(x);

  if(first == last && first == NULL){
    first=last=new;
    first->next = NULL;
    last->next = NULL;
  }else{
    last->next = new;
    last = new;
    last->next = NULL;
  }
}



int main(){

  int n, i;
  //node *root, *temp;

  printf("How many times? ");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    int j;
    printf("Enter 1 or 2: ");
    scanf("%d", &j);
    if(j==1)
      addFront();
    else
      addLast();
  }

  //temp = root;
  for(i=0; i<n; i++){
    printf("%d ", first->info);
    first = first->next;
  }

}
