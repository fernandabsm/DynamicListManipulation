#include <stdio.h>
#include <stdlib.h>
#include "DynamicList.h"

/* Questão 11*/
void Print_Item(TList List, int i)
{
	if (List.size < i)
	{
		printf("\n\t\t >>> This list don't have an ith item <<<\n");
	}
	else
	{
		int count = 0;
		TCell* aux;
		aux = List.first->next;
		while (count < i)
		{
			aux = aux->next;
			count++;
		}
		printf("Item %d - Code: %d\n", i, aux->item.code);
	}
}