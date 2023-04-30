#ifndef SOMECLASS_H
#define SOMECLASS_H
#include <string>
#include "BaseClass.h"
using namespace std;

class SomeClass : public BaseClass {
	public:
		void printValue() const override;
		void setString(const string& string) override;
	private:
		string _string;
		unsigned long checksum() const;
};

#endif // !SOMECLASS_H

