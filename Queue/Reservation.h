#include <iostream>
#include <string>
#include "Customers.h"

using namespace std;

#pragma once


class Node
{
public:
    Customers data;
    Node* next; 
};



class Reservation
{
private:
    Node* head;


public:
    Reservation();
    void insertFirst(Customers customer);
    void display();
    //Customers cancleReservation();
    int size();
    bool isEmpty();



};

