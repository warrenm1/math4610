#ifdef MACEPS_HPP
#define MACEPS_HPP

template<typename T>
class Maceps
{
public:
	T maceps = 1.0;
	int precision = 1;

private:

	precision()
	{
		while(((maceps/2) +1) > 1)
			precision += 1;

		std::cout << precision;
	}
}

#endif
