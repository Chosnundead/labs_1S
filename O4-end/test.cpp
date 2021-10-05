#include "test.h"
#include <iostream>

test::test(){
	std::cout << "test of \"test.h\"\n";
}

test::~test() {
	std::cout << "delete \"test.h\"\n";
}