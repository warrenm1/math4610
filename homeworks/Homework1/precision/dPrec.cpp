#include<iostream>

int main()
{
	double precision = 1;
	double maceps = 1.5;

	while (maceps > 1)
	{
		precision += 1;
		maceps = maceps/2 + 1;
	}

	std::cout << "Double Precision:  " << precision << std::endl;
	
	return EXIT_SUCCESS;
}
