#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int a, b, c, temp, x_0, x_1;
	string xi_0, xi_1;
	bool complexNumber = false;

	//get values of a, b, c
	cout << "For me to find the roots for thee," << endl
	<< "Ye must answer me these questions three." << endl << endl;

	cout << "#1) What is the coefficient of x^2? ";
	cin >> a;
	
	cout << endl << "#2) What is the coefficient of x^1? ";
	cin >> b;
	
	cout << endl << "#3) What is the coefficient of x^0? ";
	cin >> c;

	cout << endl;

	temp = pow(b,2) - 4 * a * c;
	
	//account for imaginary numbers
	if (temp < 0)
	{
		temp *= -1;
		complexNumber = true;
	}


	//compute roots
	if (complexNumber == false)
	{
		x_0 = (-b + sqrt(temp))/(2*a);
		x_1 = (-b - sqrt(temp))/(2*a);
	}
	else if (complexNumber == true)
	{
		xi_0 = (-b/(2*a)) + "+i" + (sqrt(temp)/(2*a));
		xi_1 = (-b/(2*a)) + "-i" + (sqrt(temp)/(2*a));
	}

	//output
	if (complexNumber)
	{
		cout << "x = " << xi_0 << endl
			<< "x = " << xi_1 << endl << endl;
	}
	else if (!complexNumber)
	{
		cout << "x = " << x_0 << endl
			<< "x = " << x_1 << endl << endl;
	}


	return EXIT_SUCCESS;
}
