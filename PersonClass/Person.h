#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
	Person() {}
	Person(string nameS, string addressS) : name(nameS), address(addressS) {}
	~Person() {}
	string getName() const { return this->name; }
	string getAddress() const { return this->address; }

private:
	string name;
	string address;
};

#endif
