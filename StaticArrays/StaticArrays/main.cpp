#include <iostream>
#include <algorithm>

//passing array as pointer to function, along with size details to access it
void Print(int *ptr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << ptr[i] << ' ';
		//std::cout << *(ptr + i) << ' ';
	}
}

//creating a function using template
template<typename T, int size>
void Print(T(&ref)[size]) {
	for (int i = 0; i < size; ++i) {
		std::cout << ref[i] << ' ';
		//std::cout << *(ptr + i) << ' ';
	}
}

template<typename T, int size>
T * Begin(T(&ref)[size]) {
	return ref;
}

template<typename T, int size>
T* End(T(&ref)[size]) {
	return (ref + size);
}

int main() {
	int arr1[5];
	int arr2[5]{};
	int arr3[5]{ 1,4,5,3,2 };

	//decomposing array to pointer
	arr3[0] = 100;
	//creating reference to array by specifying size of array
	int(&ref)[5] = arr3;

	//int *p = arr3;
	//int *end = arr3 + 5;
	int *p = Begin(arr3);
	int *end = End(arr3);
	//dereferencing the array
	*(p + 2) = 800;
	p[2] = 700;
	std::sort(p, end);
	//Print(arr3, sizeof(arr3)/sizeof(int));
	//undefined behavior if wrong size of array is passed as a parameter to function
	//Print(arr3, 10);
	//passing array by just specifying name of the array
	Print(arr3);

	return 0;
}