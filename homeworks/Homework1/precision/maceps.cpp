#include<iostream>

using namespace std;

class Maceps
{
	float seps;
	float sone;
	float scomp;

	double deps;
	double done;
	double dcomp;

public:
	Maceps();
	float smaceps();
	double dmaceps();
};

Maceps::Maceps()
{
	seps = 1.0;
	sone = 1.0;
	scomp = sone + seps;

	deps = 1.0;
	done = 1.0;
	dcomp = done + deps;
}
float Maceps::smaceps()
{
	while ()
	{
		
	}
	
	return ;
}

double Maceps::dmaceps()
{
	while ()
	{
		
	}

	return ;
}

int main()
{
	Maceps prec;

	cout << "Single Precision:  " << prec.smaceps() << endl;
	cout << "Double Precision:  " << prec.dmaceps() << endl;

	return EXIT_SUCCESS;
}
