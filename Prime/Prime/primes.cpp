#include "primes.h"
#include <math.h>

int Primes::s_primeNumber = 2;

bool Primes::isPrime(int num)
{
	int index = 2;
	bool prime = true;
	if (num == 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	for (index = 2; index <= static_cast<int>(sqrt(num)) && prime; index++)
	{
		if (num%index == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

int Primes::GetPrimeNumber()
{
	int current_prime = s_primeNumber++;
	while (!isPrime(s_primeNumber))
	{
		s_primeNumber++;
	}
	return current_prime;
}