#include <iostream>

int Square(int x) {
	return x * x;
}

void Show(int &x) {
	std::cout << "Show(int &)" << std::endl;
}

void Show(const int &x) {
	std::cout << "Show(const int &)" << std::endl;
}

void Show(int &&x) {
	std::cout << "Show(const int &)" << std::endl;
}

int main() {
	int x = int(5);
	const int &ref = 5;

	int &&rv = 5;

	Show(x);
	Show(4);

	Show(Square(3));
}
