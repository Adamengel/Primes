#pragma once

static class Primes
{
public:

	static int GetPrimeNumber();
	static bool isPrime(int num);

private:
	static int s_primeNumber;
};