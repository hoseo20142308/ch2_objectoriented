#include <iostream>
#include "Song.h"

typedef struct ListNode
{
	Song* song;
	struct ListNode* link;
}listNode;

class CartForSongs
{
public:
	CartForSongs();
	~CartForSongs();
	double calculateTotalPrice();
	void add(Song* s);
private:
	static listNode *head;
};

