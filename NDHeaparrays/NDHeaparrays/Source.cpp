#include <iostream>

int main() {
	/*
	1,2,3
	4,5,6

	creating pointers to point to 1D array
	*p1->1,2,3
	*p2->4,5,6

	storing the above pointers in another 1D array
	**pp->p1,p2
	pp[0][0]
	*/
	int **pp = new int *[2];
	pp[0] = new int[3];
	pp[1] = new int[3];

	//initializing the array
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
			pp[i][j] = rand() % 10;

	//display the elements
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j)
			std::cout << pp[i][j] << ' ';
		std::cout << std::endl;
	}

	//memory should be freed in reverse order from which it is allocated
	delete[] pp[0];
	delete[] pp[1];

	delete[] pp;

	return 0;
}