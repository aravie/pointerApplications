#include <iostream>
#include <algorithm>
#include <array>


void Print(std::array<int, 5> &arr) {
	std::sort(arr.begin(), arr.end());
	//for (int i = 0; i < arr.size(); ++i) {
	//	std::cout << arr[i] << ' ';
	//}
	//range based for loop 
	//for (auto x : arr)
	//for array of user defined objects
	for(const auto &x : arr)
		std::cout << x << ' ';
}

int main() {
	//initialize a standard array
	std::array<int, 5> arr{ 4,2,3,1,5 };
	arr.size();
	arr[0];
	//accessing the elements with at has bounds checking
	arr.at(0);

	Print(arr);

	return 0;
}
