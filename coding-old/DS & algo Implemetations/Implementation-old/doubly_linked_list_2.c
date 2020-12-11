#include<stdio.h>
#include<stdlib.h>

struct list{
  int info;
  struct list *next;
  struct list *prev;
};
typedef struct list node;

node *first=NULL, *last = NULL, *newnode = NULL;
node *start, *temp, *temp2;

node* getNode(int x){
  newnode = (node *)malloc(sizeof(node));
  newnode->info = x;
  newnode->next = NULL;
  newnode->prev = NULL;
  return newnode;
}

//#1
void addFront(){
  int x;
  printf("Enter a number to insert into the list: ");
  scanf("%d", &x);
  newnode = getNode(x);
  if(first == last && first == NULL){
    first = last = newnode;
  }else{
    newnode->next = first;
    first->prev = newnode;
    first = newnode;
  }
}

//#2
void addLast(){
  int x;
  printf("Enter a number to insert into the list: ");
  scanf("%d", &x);
  newnode = getNode(x);
  if(first == last && last == NULL){
    first = last = newnode;
  }else{
    last->next = newnode;
    newnode->prev = last;
    last = newnode;
  }
}

//#3
void addBetween(int k, node* first){
  int x;
  printf("Enter a value to enter into the list: ");
  scanf("%d", &x);
  newnode = getNode(x);

  start = first;
  while(start->info != k){
    start = start->next;
    if(start->info != k && start == last){
      printf("%d Not Found!", k);
      break;
      return;
    }
  }

  temp = start;
  start = start->next;
  temp->next = newnode;
  newnode->prev = temp;
  newnode->next = start;
  start->prev = newnode;
}

//#4
void display(node *first){
  start = first;
  while(start->next != NULL){
    printf("%d->", start->info);
    start = start->next;
  }
  printf("%d", start->info);
}


int main(){
  int numToEnterAfter;
  printf("\t\t\tC implementation of singly LL./\n");
  int choice;
  do{
    printf("\n1 for Adding to the Front of LL\n");
    printf("2 for Adding to the End of LL\n");
    printf("3 for Adding in Between the LL\n");
    printf("4 for Displaying all elements of LL\n");
    printf("-1 for Adding to Exit\n");

    printf("Please enter your choice (enter -1 to exit): ");
    scanf("%d", &choice);

    switch(choice){
      case 1:
        addFront();
        break;
      case 2:
        addLast();
        break;
      case 3:
        printf("Enter the number after which you want to enter: ");
        scanf("%d", &numToEnterAfter);
        addBetween(numToEnterAfter, first);
        break;
      case 4:
        display(first);
        break;
      case -1:
        printf("Thanks For Using!\n");
        break;
      default:
        printf("Invalid Input!\n");
    }
  }while(choice != -1);
}
