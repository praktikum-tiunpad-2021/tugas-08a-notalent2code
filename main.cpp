/*
 * Bebas disini bisa masukin apa aja.
 * Misal mau testing atau debugging sendiri.
 *
 */

#include <iostream>

#include "queue.hpp"

using namespace strukdat::priority_queue;

template<typename T>
void traversal(Queue<T> q){
  ElementPtr<T> pHelp = q.head;
  printf("HEAD\t\t= %d\n", pHelp->value);
  printf("HEAD NEXT\t= %d\n", pHelp->next->value);
  while(pHelp != nullptr){
    printf("Value :%d\tPrior : %d\n", pHelp->value, pHelp->priority);
    
    pHelp = pHelp->next;
  }
}

int main(){
  int value[5] = {1,2,3,4,5};
  int priority[5] = {4,2,7,2,4};

  auto q = new_queue<int>();
  if(sizeof(q) == sizeof(Queue<int>)){
    printf("Empty Queue\n");
  }
  for (int i = 0; i < 5; ++i){
    enqueue(q,value[i],priority[i]);
  }
  printf("\nTOP\t\t= %d\n", top(q));
  traversal(q);
  dequeue(q);
  printf("\n");
  printf("\nTOP\t\t= %d\n", top(q));
  traversal(q);
}
