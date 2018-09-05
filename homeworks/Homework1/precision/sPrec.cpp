#include<iostream>

int main()
{
	float precision = 1;
	float maceps = 1.5;

	while (maceps > 1)
	{
		precision += 1;
		maceps = maceps/2 + 1;
	}

	std::cout << "Single Precision:  " << precision << std::endl;


	return EXIT_SUCCESS;
}
