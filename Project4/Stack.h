#ifndef  STACK_H
#define STACK_H

struct stack { int elem; stack *next; };

void Push(stack *&p, int &num); // �������� ������� � ���� 
inline bool Empty(stack *p); // �������� ����� �� �������
void Pop(stack *&p, int &num); // ����� ������� �� �����(� ���������)
void printStack(stack *p); // ������� ���������� �����
#endif 
