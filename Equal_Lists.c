#include <stdio.h>
#include <stdlib.h>
#include "DynamicList.h"

/* Questão 8*/
int Equal_Lists(TList List1, TList List2)
{
	if (!Empty_List(List1) && !Empty_List(List2))
	{
		if (List1.size == List2.size)
		{
			TCell* aux1, * aux2;
			aux1 = List1.first->next;
			aux2 = List2.first->next;
			for (int i = 0; i < List1.size; i++)
			{
				if (aux1->item.code != aux2->item.code)
					return 0;
				aux1 = aux1->next;
				aux2 = aux2->next;
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	
}