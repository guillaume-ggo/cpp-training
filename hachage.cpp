#include <stdio.h>
#include <stdlib.h>
typedef struct elt {
  elt* next;
  int int_value;
  char* string_value;
} Element;
Element* head;
void add(int elt) {
  if(head==0) 
  {
    head=(Element*)malloc(sizeof(Element));
    head->int_value=elt;
    head->next=0;
    return;
  }
  Element* current = head;
  while(current->next!=0)
  {
    current=current->next;
  }
    
  Element* newElt=(Element*)malloc(sizeof(Element));
  newElt->int_value=elt;
  newElt->next=0;
  current->next=newElt;
}

void printList() {
  Element* current=head;
  while(current!=0)
  {
    printf("Element value %i\n",current->int_value);
    current=current->next;
  }
}

int getHashCode(char *key) {
  return 0;
}
int main(int argc, char **argv) {
  int* index=0;
  int init_index=49;
  index=&init_index;
  char autos[3][20]={"A6","X5","308"};
  char autos2[100][255];
  printf("Starting...\n");
  printf("Audy %s \n", autos[0]);
  printf("Initial Index value %i (address %i)\n", init_index, &init_index);
  printf("Index value %i (address %i)\n", *index, index);
  add(2);
  add(4);
  add(8);
  add(16);
  printList();
  printf("Ending...\n");
  return 0;
}

