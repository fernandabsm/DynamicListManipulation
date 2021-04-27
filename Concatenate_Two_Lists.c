#include <stdio.h>
#include <stdlib.h>
#include "DynamicList.h"

/* Questão 9*/
void Concatenate_Two_Lists(TList* List1, TList List2)
{
	if (!Empty_List(*List1) && !Empty_List(List2))
	{
		TCell* aux;
		aux = List2.first->next;
		while (aux != NULL)
		{
			Inserts_Item(aux->item, List1);
			aux = aux->next;
		}
	}
	else
	{
		printf("\n\t\t >>>>>>>>>> MSG: One of the lists is empty! <<<<<<<<<<");
	}
}