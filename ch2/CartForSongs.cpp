#include "CartForSongs.h"

CartForSongs::CartForSongs()
{
}


CartForSongs::~CartForSongs()
{
}

double CartForSongs::calculateTotalPrice()
{
	double total = 0.0;
	listNode *p = head;

	while (p != NULL)
	{
		total += (p->song)->getPrice();
		p = p->link;
	}
	return total;
}

void CartForSongs::add(Song* s)
{
	listNode* L = (listNode *)malloc(sizeof(listNode));
	L->song = s;
	L->link = head;
	head = L;
}
