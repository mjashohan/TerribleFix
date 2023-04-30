#include <iostream>
#include "SomeClass.h"
using namespace std;

void SomeClass::printValue() const {
	cout << "The string is: " << _string << endl;
	cout << "The checksum is: " << checksum() << endl;
}

void SomeClass::setString(const string& string) {
	_string = string;
}

unsigned long SomeClass::checksum() const {
	unsigned long checksum = 0;
	for (const char c : _string) {
		checksum += c;
	}
	return checksum;
}