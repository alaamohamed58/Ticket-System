#include <iostream>
#include "WaitingList.h"

using namespace std;

bool WaitingList::isEmpty()
{
	return front == NULL;
}

int WaitingList::size()
{
	int count{ 0 };
	NodeList* temp = front;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;

	}

	return count;
}

void WaitingList::enqueue(Customers customer)
{
	NodeList* newNode = new NodeList();
	newNode->data = customer;

	if (isEmpty())
		front = rear=  newNode;
	
	else {
		rear->next = newNode;
		rear = newNode;
	}
}





void WaitingList::display()
{
	NodeList* temp = front;
	while (temp != NULL)
	{
		cout << "Customer Number: " << temp->data.customer_number << ", ";
		cout << "Full Name: " << temp->data.name << endl;
		temp = temp->next;

	}
}

WaitingList::WaitingList():front(NULL), rear(NULL)
{
}


