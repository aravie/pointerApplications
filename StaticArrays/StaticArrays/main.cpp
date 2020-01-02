#include <iostream>

//passing array as pointer to function, along with size details to access it
void Print(int *ptr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << ptr[i] << ' ';
		//std::cout << *(ptr + i) << ' ';
	}
}

int main() {
	int arr1[5];
	int arr2[5]{};
	int arr3[5]{ 1,2,3,4,5 };

	//decomposing array to pointer
	arr3[0] = 100;

	int *p = arr3;
	*(p + 2) = 800;
	//Print(arr3, sizeof(arr3)/sizeof(int));
	//undefined behavior if wrong size of array is passed as a parameter to function
	Print(arr3, 10);
	return 0;
}