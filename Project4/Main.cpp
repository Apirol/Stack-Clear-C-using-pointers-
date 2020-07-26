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
		printf_s("<1> - ��������� ������� � ���� \n");
		printf_s("<2> - ����� ������� �� ����� \n");
		printf_s("<3> - ����������� ���������� ����� \n");
		printf_s("<4> - ����� \n");
		int repeatFlag = 0;
		do
		{
			printf_s("������� ����� ������� (�� 1 �� 4) \n");
			if (!scanf_s("%d", &n))
			{
				printf_s("������ \n");
				_getch();
				return 0;
			}
			switch (n)
			{
			case _Push: printf_s("������� �����: \n");
				scanf_s("%d", &m);
				Push(p, m);
				break;
			case _Pop: Pop(p, num);
				break;
			case _Print: printStack(p);
				break;
			case Exit: exitFlag = 1;
				break;
			default: printf_s("������ ����� �������� \n");
				repeatFlag = 1;
				break;
			}
		} while (!exitFlag && !repeatFlag);
	} while (!exitFlag);
}