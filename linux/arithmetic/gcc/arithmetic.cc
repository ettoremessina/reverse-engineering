#include <iostream>

int main()
{
	int v1 = 41;
	int v2 = 7;
	int sum = v1 + v2;
	int sub = v1 - v2;
	int mul = v1 * v2;
	int quo = v1 / v2;
	int rem = v1 % v2;
	
	std::cout << sum << " | " << sub << " | " << mul << " | " << quo << " | " << rem << "\n";
	return 0;
}
