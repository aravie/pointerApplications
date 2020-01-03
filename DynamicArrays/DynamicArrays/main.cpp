#include <iostream>
#include <algorithm>
//display the contents of an array; here cannot use template
void Print(int *p, int size) {
	for (int i = 0; i < size; ++i)
		std::cout << p[i] << ' ';
}

int main() {
	int *p = new int[5]{5,1,7,2,8};
	//adding more elements to an array by allocating new array
	int *pTemp = new int[5 + 5];

	std::copy(p,p+5,pTemp);
	//for (int i = 0; i < 5; i++)
		//std::cout << p[i] << ' ';
	//delet old array
	delete[]p;
	//assign address of new array to p
	p = pTemp;

	p[5] = 100;
	Print(p, 6);
	delete[]p;
}