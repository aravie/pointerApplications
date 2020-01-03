#include <iostream>

void Print(int(*p)[3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 3; j++)
			std::cout << p[i][j] << ' ';
		std::cout << std::endl;
	}
}

template<typename T, int rows, int columns>
void Print(T(&ref)[rows][columns]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
			std::cout << ref[i][j] << ' ';
		std::cout << std::endl;
	}
}

int main() {
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	//creating a pointer
	int(*p)[3] = arr;
	p[0][0] = 100;

	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++)
	//		std::cout << arr[i][j];
	//	std::cout << std::endl;
	//}
	Print(arr);
}