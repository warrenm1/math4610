# Machine Precision

**Routine Name:**          maceps



**Author:** Michael A. Warren



**Language:** C++. This file can be compiled using a gcc compiler.


For example,



    gcc maceps.cpp



will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit

better



    gcc -o maceps maceps.cpp



**Description/Purpose:** This routine will compute both the single precision value and a double precision value for the machine epsilon or the number of digits in the representation of real numbers in single and double precision. This is a routine for analyzing the behavior of any computer. This usually will need to be run one time for each computer.



**Input:** There are no inputs needed in this case. Even though there are arguments supplied, the real purpose is to return values in those variables.


**Output:** This routine returns a single precision value and a double precision value for the number of decimal digits that can be represented on the computer being queried.



**Usage/Example:**



The routine has no arguments needed to return the values of the precision in terms of the smallest number that can be

represented. Since the code is written in terms of a c++ subroutine, the values of the machine machine epsilon and

the power of two that gives the machine epsilon. 



      ./maceps

The values coming out represent the number of bits used to store the floats and doubles on your computer.



**Implementation/Code:** The following is the code for smaceps() and dmaceps()

	#include<iostream>

	using namespace std;

	//creating the class for machine precision
	class Maceps
	{
	        float seps;
	        float sone;
	        int sprec;

	        double deps;
	        double done;
	        int dprec;

	public:
	        Maceps();
	        float smaceps();
	        double dmaceps();
	};

	//initializing the values
	Maceps::Maceps()
	{
	        seps = 1.0;
	        sone = 1.0;
	        sprec = 1;
	
	        deps = 1.0;
	        done = 1.0;
	        dprec = 1;

	}

	//computing the precision for a float
	float Maceps::smaceps()
	{
	        while ((seps/2+sone)>sone)
	        {
	                seps = (seps/2)+sone;
	                sprec++;
	        }

	        return sprec;
	}
	
	//computing the precision for a double
	double Maceps::dmaceps()
	{
	        while ((deps/2+done)>done)
	        {
	                deps = (deps/2) + done;
	                dprec++;
	        }

	        return dprec;
	}	

	//outputing the values of both single and double precision
	int main()
	{
	        Maceps prec;

	        cout << "Single Precision:  " << prec.smaceps() << endl;
	        cout << "Double Precision:  " << prec.dmaceps() << endl;

	        return 0;
	}
                  



Last Modified:** September/2018
