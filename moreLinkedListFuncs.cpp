//Mihir Bharti - 5149646
//Nik Belle - 5564083

#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"


void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL);

  Node *p = new Node;

  p->data = value;
  p->next = nullptr;

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;    
  } 
  else {
    list->tail->next = p;
    list->tail = p;
  }
}

void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL);

  Node* p = new Node;

  p->data = value;
  p->next = nullptr;

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
  } 
  else {
      p->next = list->head;
      list->head = p;
  }
}

Node * pointerToMax(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);

  Node* p = new Node;
  p = list->head;
  Node* maxNode = p;
  int max = p->data;

  while (p != NULL){
    if (p->data > max){
      maxNode = p;
      max = p->data;
    }
    p = p->next;
  }

  return maxNode;
}

Node * pointerToMin(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);

  Node* p = new Node;
  p = list->head;
  Node* minNode = p;
  int min = p->data;

  while (p != NULL){
    if (p->data < min){
      minNode = p;
      min = p->data;
    }
    p = p->next;
  }

  return minNode;
}

int largestValue(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);
  
  return pointerToMax(list)->data;

}

int smallestValue(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);

  return pointerToMin(list)->data;

}

int sum(LinkedList * list) {
  assert(list!=NULL);
  int sum = 0;

  for (Node* p = list->head; p != nullptr; p = p->next){
    sum = sum + p->data;
  }
  return sum;
}