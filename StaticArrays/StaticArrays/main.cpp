#include <iostream>

int main() {
	int arr1[5];
	int arr2[5]{};
	int arr3[5]{ 1,2,3,4,5 };

	//decomposing array to pointer
	arr3[0] = 100;

	int *p = arr3;
	*(p + 2) = 800;

	return 0;
}