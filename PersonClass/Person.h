#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	Person() = default;
	Person(string nameS, string addressS) : name(nameS), address(addressS) {}
	~Person() {}
	string getName() const { return this->name; }
	string getAddress() const { return this->address; }
	friend istream &read(istream &is, Person &p);
	friend ostream &print(ostream &os, const Person &p);

private:
	string name;
	string address;
};

#endif
