## Root Finder
This is a  file for the purpose of finding the two roots in a quadratic formula.

**Routine Name:**           rootFinder

**Author:** Michael A. Warren

**Language:** C++. The code can be compiled using the GNU C++ compiler (gcc).

For example,

    gcc rootFinder.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o rootFinder rootFinder.cpp

**Description/Purpose:** This routine will take a quadradic formula and calculate the roots, including complex roots.

**Input:** Upon running the routine, the user will be asked to input three values. The coefficients *a, b, c* in the quadratic formula *ax^2+bx+c*

**Output:** This routine returns the two roots that make the quadratic formula work. If the roots are complex, it will represent them in the form *a+ib*. 

**Usage/Example:**

The routine needs no arguments to run.

Let *2x^2+6x+7=0*, upon runtime the user will input a *2*, then a *6*, then a *7* when asked for each coefficient. The result will have the outputs
	x=-1.5+i1.11803
	x=-1.5-i1.11803

**Implementation/Code:** The following is the code for rootFinder()

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



**Last Modified:** September/2018
