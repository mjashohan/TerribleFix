#ifndef BASECLASS_H
#define BASECLASS_H

#include <string>
using namespace std;

class BaseClass {
    public:
        virtual void printValue() const = 0;
        virtual void setString(const string& string) = 0;
};

#endif // !BASECLASS_H

