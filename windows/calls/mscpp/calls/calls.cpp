#include <iostream>

long long f1(long long a)
{
	std::cout << "f1(" << a << ")" << std::endl;
	return a;
}

long long f2(long long a, long long b)
{
	std::cout << "f2(" << a << ", " << b << ")" << std::endl;
	return a + b;
}

long long f3(long long a, long long b, long long c)
{
	std::cout << "f3("
		<< a << ", "
		<< b << ", "
		<< c << ")"
		<< std::endl;
	return a + b + c;
}

long long f4(long long a, long long b, long long c, long long d)
{
	std::cout << "f4("
		<< a << ", "
		<< b << ", "
		<< c << ", "
		<< d << ")"
		<< std::endl;
	return a + b + c + d;
}

long long f5(long long a, long long b, long long c, long long d, long long e)
{
	std::cout << "f5("
		<< a << ", "
		<< b << ", "
		<< c << ", "
		<< d << ", "
		<< e << ")"
		<< std::endl;
	return a + b + c + d + e;
}

long long f6(long long a, long long b, long long c, long long d, long long e, long long f)
{
	std::cout << "f6("
		<< a << ", "
		<< b << ", "
		<< c << ", "
		<< d << ", "
		<< e << ", "
		<< f << ")"
		<< std::endl;
	return a + b + c + d + e + f;
}

int main()
{
	long long z;
	z = f1(0x1000000000000001);
	z = f2(0x1000000000000001, 0x1000000000000002);
	z = f3(0x1000000000000001, 0x1000000000000002, 0x1000000000000003);
	z = f4(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004);
	z = f5(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004,
	       0x1000000000000005);
	z = f6(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004,
	       0x1000000000000005, 0x1000000000000006);
	return 0;
}
