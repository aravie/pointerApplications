#include "pch.h"
#include <iostream>

void Print(std::initializer_list<int> list) {
	std::initializer_list<int>::iterator it = list.begin();
	while (it != list.end()) {
		std::cout << *it << " ";
		++it;
	}
}


int main()
{
	//Uniform intialization
	int i{ 0 };
	int *ptr{};
	int arr[5] = { 1,2,3 };

	std::initializer_list<int> list{ 1,2,3,4 };
	Print(list);
}

