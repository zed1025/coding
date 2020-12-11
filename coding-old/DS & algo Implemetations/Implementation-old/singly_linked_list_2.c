/*
  Made by Amit Kumar
  This is a C implementation of the Singly Linked List Data Structure
  The following operations on the LL can be carried out
    .1. Inserting at the front of a LL
    .2. Inserting at the end of a LL
    .3. Insertong after a given element k
    .4. Traversing a LL
    .5. Deleting from front
    .6. Deleting from end
    .7. Deleting an element after an element k
    8. Sorting a LL
    9. Reversing a LL
    .10. Searching the LL
    11. length of the linked list
*/
#include<stdio.h>
#include<stdlib.h>

//defining the node of the Linked List
struct list{
  int info;
  struct list *next;
};
typedef struct list node;

node *first=NULL, *last = NULL, *newnode = NULL;
node *start, *temp, *temp2;
int count = 0;

node* getNode(int x){
  newnode = (node *)malloc(sizeof(node));
  newnode->info = x;
  newnode->next = NULL;
  return newnode;
}

//#11
int lengthOfList(){
  start = first;
  while(start->next != NULL){
    count++;
    start = start->next;
  }
  return (count+1);
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
  newnode->next = start;
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
//#5
node* delFront(){
  if(first != NULL){
    temp = first;
    first = first->next;
    return temp;
  }else{
    printf("The LL is empty!");
  }
  return NULL;
}

//#6
node* delEnd(){
  if(first != NULL){
    start = first;
    while(start != last){
      temp = start;
      start = start->next;
    }
    last = temp;
    last->next = NULL;
    return start;
  }else{
    printf("The list is Empty!");
  }
  return NULL;
}

//#7
node* delBetween(int n){
  start = first;
  temp2 = last;
  if(first != NULL){
    if(start->info == n){
      temp2 = delFront();
      return temp2;
    }else if(temp2->info == n){
      start = delEnd();
      return start;
    }else{
      while(start->info != n){
        temp = start;
        start = start->next;
      }
      temp->next = start->next;
      return start;
    }
  }else{
    printf("The list is Empty!");
  }
  return NULL;
}

//#8
void sort(){

}

//#9
void reverse(){
  
}

//#10
void listSearch(){
  int n;
  printf("Enter the number you want to search: ");
  scanf("%d", &n);

  start = first;
  while(start->next != NULL){
    if(start->info == n){
      printf("Found %d", n);
      return;
    }else{
      start = start->next;
    }
  }
  if(start->info == n){
    printf("Found %d", n);
  }else{
    printf("%d is not in the LL", n);
  }
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
    printf("5 for Deleting from the Front of LL\n");
    printf("6 for Deleting from the End of LL\n");
    printf("7 for Deleting after 'k' from LL\n");
    printf("8 for Sorting LL\n");
    printf("9 for Reversing LL\n");
    printf("10 for Searching the LL");
    printf("11 for finding the length of the linked list!");
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
      case 5:
        temp2 = delFront();
        printf("%d has been deleted!", temp2->info);
        break;
      case 6:
        temp2 = delEnd();
        printf("%d has been deleted!", temp2->info);
        break;
      case 7:
        printf("Enter the number you want to delete: ");
        scanf("%d", &numToEnterAfter);
        temp2 = delBetween(numToEnterAfter);
        printf("%d has been deleted!", temp2->info);
        break;
      case 8:

        break;
      case 9:

        break;
      case 10:
        listSearch();
        break;
      case 11:
        numToEnterAfter = lengthOfList();
        printf("The length of the linked list is %d", numToEnterAfter);
        break;
      case -1:
        printf("Thanks For Using!\n");
        break;
      default:
        printf("Invalid Input!\n");
    }
  }while(choice != -1);
}
