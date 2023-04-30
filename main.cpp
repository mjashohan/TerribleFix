#include <iostream>
#include <string>
#include "BaseClass.h"
#include "SomeClass.h"

int main(int argc, char* argv[]) {
    BaseClass* object{};
    if (argc < 3) {
        cerr << "Error: Invalid arguments"<< endl;
        cerr << "Usage: " << argv[0] << " <repeats> <string> [null]" <<endl;
        return 1;
    }

    const int repeats = atoi(argv[1]);
    if (!repeats) {
        cerr << "Error: Invalid argument for number of repeats"<< endl;
    }
    for (int i = 0; i < atoi(argv[1]); i++) {
        object = new SomeClass;
        object->setString(argv[2]);
        object->printValue();
    }
    if (argc == 4) {
        object->setString(NULL);
        object->printValue();
    }
    return 0;
}