#include "Stack.h"
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	enum operation { _Push = 1, _Pop, _Print, Exit };
	int n = 0, m = 0;
	stack *p = NULL;
	setlocale(LC_CTYPE, "Russian");
	int exitFlag = 0, num;
	do
	{
		printf_s("<1> - поместить элемент в стек \n");
		printf_s("<2> - вз€ть элемент из стека \n");
		printf_s("<3> - распечатать содержимое стека \n");
		printf_s("<4> - выход \n");
		int repeatFlag = 0;
		do
		{
			printf_s("¬ведите номер команды (от 1 до 4) \n");
			if (!scanf_s("%d", &n))
			{
				printf_s("ќшибка \n");
				_getch();
				return 0;
			}
			switch (n)
			{
			case _Push: printf_s("¬ведите число: \n");
				scanf_s("%d", &m);
				Push(p, m);
				break;
			case _Pop: Pop(p, num);
				break;
			case _Print: printStack(p);
				break;
			case Exit: exitFlag = 1;
				break;
			default: printf_s("ќшибка ввода операции \n");
				repeatFlag = 1;
				break;
			}
		} while (!exitFlag && !repeatFlag);
	} while (!exitFlag);
}