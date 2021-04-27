#include <stdio.h>
#include <stdlib.h>
#include "DynamicList.h"

/* Questão 10*/
void Inserts_Item_Ascending_Order(TList* List, TItem Item)
{
	if (Empty_List(*List))
	{
		Inserts_Item(Item, List);
	}
	else if (strcmp(List->last->item.name, Item.name) <= 0)
	/* O codigo comentado serve para caso se queria inserir por ordem de tamanho*/
	//else if (strlen(Item.name) >= strlen(List->last->item.name))
	{
		Inserts_Item(Item, List);
	}
	else
	{
		TCell* new_item = (TCell*)malloc(sizeof(TCell));
		new_item->item = Item;
		TCell* aux, *prev_cell, *next_cell;
		aux = List->first;
		while (strcmp(aux->next->item.name, Item.name) <= 0)
		/* O codigo comentado serve para caso se queria inserir por ordem de tamanho*/
		//while ((strlen(Item.name)) >= (strlen(aux->next->item.name)))
		{
			aux = aux->next;
		}
		next_cell = aux->next;
		prev_cell = aux;
		new_item->next = next_cell;
		prev_cell->next = new_item;
		List->size++;
	}
}