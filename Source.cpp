#include <iostream>

int main()
{
	float numar = 2.5;
	float* pointer = &numar;

	std::cout << "Adresa variabilei este " << &numar << std::endl;
	std::cout << "Valoarea pointerului este " << pointer << std::endl;

	system("pause");

}