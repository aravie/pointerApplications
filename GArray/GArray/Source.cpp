#include "GArray.h"
#include <iostream>

void Print(const Basic::GArray<int> &arr, const char *message) {
	std::cout << message << std::endl;
	for (int i = 0; i < arr.GetSize(); ++i)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int main() {
	try {
		using namespace Basic;
		GArray<int> arr{ 1,2,3 };
		Print(arr, "Initial array");
		arr.Insert(0, 0);
		arr.Insert(3, 4);
		Print(arr, "Insert");
		arr.Erase(0);
		Print(arr, "Erase");
		arr.Erase(2);
		Print(arr, "Erase");
	}
	catch (std::exception &ex) {
		std::cout << "### EXCEPTION ###" << std::endl;
		std::cout << ex.what() << std::endl;
	}
	return 0;
}