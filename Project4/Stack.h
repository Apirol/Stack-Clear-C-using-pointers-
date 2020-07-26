#ifndef  STACK_H
#define STACK_H

struct stack { int elem; stack *next; };

void Push(stack *&p, int &num); // положить элемент в стек 
inline bool Empty(stack *p); // проверка стека на пустоту
void Pop(stack *&p, int &num); // взять элемент из стека(с удалением)
void printStack(stack *p); // вывести содержимое стека
#endif 
