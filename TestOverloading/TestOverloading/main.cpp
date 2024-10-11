#include <iostream>
#include "Integer.h"
using i = Integer;

int main()
{
	i l(2);
	i k(2);
	i tmp(0);
	/*std::cout << k + l;
	k += l;
	std::cout << k;
	std::cout << k - l;
	k -= l;
	std::cout << k;
	std::cout << k * l;
	k *= l;
	std::cout << k;
	std::cout << k / l;
	k /= l;
	std::cout << k;
	std::cout << k % l;
	k %= l;
	std::cout << k;*/
	tmp = k ^ l;
	std::cout << tmp;

	return 0;
}