#include "pch.h"
#include <iostream>

void Print(std::initializer_list<int> list) {
	// Auto has to be initialize variable with function return
	auto it = list.begin();
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
	//auto to initialize pointer
	auto *ptr2 = ptr;
	int arr[5] = { 1,2,3 };

	std::initializer_list<int> list{ 1,2,3,4 };
	Print(list);
}