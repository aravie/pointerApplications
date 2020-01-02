#include <iostream>

int main() {
	int data = 5;
	//address of pointer in stack
	int *ptr = &data;

	//address of pointer in heap
	ptr = new int(7);
	delete ptr;
	return 0;
}