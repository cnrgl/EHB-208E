// LinkedList.cpp : Statik kitaplık için işlevleri tanımlar.
//

#include "pch.h" // precompiled library
class Node
{
	public:
		int data;
		// ... add data
		Node *next;
		// Node *prev;

};

namespace LinkdList
{
	void push(class Node** head, int data0, ...) // redefine arguments
	{
		Node* n_node = new Node();
		n_node->data = data0;
		// add datas ...
		n_node->next = (*head);
		*head = n_node;
	}
	void pop(class Node** front, int data0, ...);
	void pop(class Node** head, int data0, ...);
	void insertion(class Node**, int data0, ...);
	void printNode(class Node** );
	int getLength(class Node** head,bool isCircular);




}

