#include <iostream>


using namespace std;

#pragma once
class Customers
{

public:
	string name;
	int customer_number;
	Customers() : customer_number(0), name("") {};
	Customers(int number, const string& name) : customer_number(number), name(name) {}
};

