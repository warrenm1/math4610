#include<iostream>

using namespace std;

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

Maceps::Maceps()
{
	seps = 1.0;
	sone = 1.0;
	sprec = 1;

	deps = 1.0;
	done = 1.0;
	dprec = 1;
	
}
float Maceps::smaceps()
{
	while ((seps/2+sone)>sone)
	{
		seps = (seps/2)+sone;
		sprec++;
	}
	
	return sprec;
}

double Maceps::dmaceps()
{
	while ((deps/2+done)>done)
	{
		deps = (deps/2) + done;
		dprec++;
	}

	return dprec;
}

int main()
{
	Maceps prec;

	cout << "Single Precision:  " << prec.smaceps() << endl;
	cout << "Double Precision:  " << prec.dmaceps() << endl;

	return 0;
}
