#include <stdio.h>
#include "Stack.h"

inline bool Empty(stack *p)
{
	return (p == NULL);
}

void Push(stack *&p, int &num)
{
	if (Empty(p))
	{
		p = new stack;
		p->next = NULL;
		p->elem = num;
	}
	else
	{
		stack *q = new stack;
		q->next = p;
		q->elem = num;
		p = q;
	}
}

void Pop(stack *&p, int &num)
{
	if (!Empty(p))
	{
		num = p->elem;
		if (p->next == NULL)
		{
			delete p;
			p = NULL;
		}
		else
		{
			stack *q = p;
			p = p->next;
			delete q;
		}
		printf_s("Из стека извлечён элемент: %d \n", num);
	}
	else
		printf_s("Стек пуст \n");
}

void printStack(stack *p)
{
	if (!Empty(p))
	{
		for (p; p != NULL; p = p->next)
			printf_s("%d\n", p->elem);
	}
	else
		printf_s("Стек пуст \n");
}