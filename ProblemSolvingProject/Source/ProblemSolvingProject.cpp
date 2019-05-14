// ProblemSolvingProject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Search.h"
#include "Array.h"
#include "ArrayDemo.h"
using namespace std;
int main()
{
	MyLib::Array<Demo*, 1> demos;
	demos[0] = new ArrayDemo();
	for(Demo* d : demos){
		d -> run_demo();
	}
	return 1;
}