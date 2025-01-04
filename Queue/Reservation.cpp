#include <iostream>

#include "Reservation.h"

using namespace std;

Reservation::Reservation():head(NULL){}


bool Reservation::isEmpty()
{
	return head == NULL;
}

int Reservation::size()
{
	int count{ 0 };
	Node* temp = head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return count;
}

void Reservation::display() 
{
	Node* temp = head;

	while (temp != NULL)
	{
		cout << "Customer Number: " << temp->data.customer_number << ", ";
		cout << "Full Name: " << temp->data.name << endl;
		temp = temp->next;

	}
	

}

void Reservation::insertFirst(Customers customer)
{
	Node* newNode = new Node();
	newNode->data = customer;
	if (isEmpty())
	{
		newNode->next = NULL;
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}





