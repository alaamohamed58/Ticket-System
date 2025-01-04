#pragma once
#include <iostream>
#include "Customers.h"
using namespace std;

class NodeList
{
public:
    Customers data;
    NodeList* next;



};


class WaitingList
{
private:
    NodeList* front;
    NodeList* rear;

public:
    bool isEmpty();
    int size();
    void enqueue(Customers customer);
    void display();


    WaitingList();

};

