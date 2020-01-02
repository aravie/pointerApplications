#include "pch.h"
#include <iostream>
#include <initializer_list>

class Test {
	//in class member initialization; we do not need a default constructor for initialization
	int m_Val{}; // int m_Val = 0;
public:
	//constructor with variables initialized
	/*Test() :m_Val{0} {

	}*/
	//telling compiler to synthesize default constructor
	Test() = default;
	//construtor with parameter initialization
	Test(int x) :m_Val{ x } {

	}
};
void Print(std::initializer_list<int> list) {
	// Auto has to be initialize variable with function return
	auto it = list.begin();
	/*while (it != list.end()) {
		std::cout << *it << " ";
		++it;
	}*/
	//range based for loop
	//for (int x : list) {
	for (const auto &x : list) {
		std::cout << x << ' ';
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
