#include "ArrayDemo.h"
#include "Array.h"
#include "Search.h"
#include "Sort.h"
#include <iostream>

ArrayDemo::ArrayDemo()
{
}


ArrayDemo::~ArrayDemo()
{
}

void ArrayDemo::run_demo()
{
	MyLib::Array<int, 2> myarray;
	myarray[0] = 0;
	myarray[1] = 1;
	std::cout << myarray[0] << std::endl;
	std::cout << myarray[1] << std::endl;
	try {
		std::cout << myarray[2] << std::endl;
	}
	catch (std::invalid_argument e) {
		std::cout << e.what() << std::endl;
	}

	auto result = MyLib::linear_search(myarray.begin(), myarray.end(), 2);
	if (result == myarray.end()) {
		std::cout << "Not found " << std::endl;
	}
	result = MyLib::linear_search(myarray.begin(), myarray.end(), 1);
	if (result == myarray.end()) {
		std::cout << "Not Found " << std::endl;
	}
	else {
		std::cout << "Found " << std::endl;
	}

	MyLib::Array<int, 10> myarray2;
	myarray2[0] = 10;
	myarray2[1] = 2;
	myarray2[2] = 8;
	myarray2[3] = 7;
	myarray2[4] = 5;
	myarray2[5] = 6;
	myarray2[6] = 4;
	myarray2[7] = 3;
	myarray2[8] = 9;
	myarray2[9] = 1;
	myarray2.print();
	MyLib::bubble_sort(myarray2.begin(), myarray2.end());
	myarray2.print();

	bool found = MyLib::binary_search(myarray2.begin(), myarray2.end(), 0);
	std::cout << ((found) ? "Found" : "Not Found") << std::endl;
}
