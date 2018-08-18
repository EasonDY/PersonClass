#include "stdafx.h"
#include "Person.h"

istream &read(istream &is, Person &p) {
	getline(is, p.name);
	getline(is, p.address);
	return is;
}

ostream &print(ostream &os, const Person &p) {
	os << p.name << " " << p.address << endl;
	return os;
}