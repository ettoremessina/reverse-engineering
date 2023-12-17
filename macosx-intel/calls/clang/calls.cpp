#include <iostream>

long f1(long a)
{
	std::cout << "f1(" << a << ")" << std::endl;
	return a;
}

long f2(long a, long b)
{
	std::cout << "f2(" << a << ", " << b << ")" << std::endl;
	return a + b;
}

long f3(long a, long b, long c)
{
	std::cout << "f3(" 
		<< a << ", " 
		<< b << ", " 
		<< c << ")" 
		<< std::endl;
	return a + b + c;
}

long f4(long a, long b, long c, long d)
{
	std::cout << "f4(" 
		<< a << ", " 
		<< b << ", " 
		<< c << ", " 
		<< d << ")" 
		<< std::endl;
	return a + b + c + d;
}

long f5(long a, long b, long c, long d, long e)
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

long f6(long a, long b, long c, long d, long e, long f)
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

long f7(long a, long b, long c, long d, long e, long f, long g)
{
	std::cout << "f7(" 
		<< a << ", " 
		<< b << ", " 
		<< c << ", " 
		<< d << ", " 
		<< e << ", " 
		<< f << ", " 
		<< g << ")" 
		<< std::endl;
	return a + b + c + d + e + f + g;
}

long f8(long a, long b, long c, long d, long e, long f, long g, long h)
{
	std::cout << "f8(" 
		<< a << ", " 
		<< b << ", " 
		<< c << ", " 
		<< d << ", " 
		<< e << ", " 
		<< f << ", " 
		<< g << ", " 
		<< h << ")" 
		<< std::endl;
	return a + b + c + d + e + f + g;
}

int main()
{
	long z;
	z = f1(0x1000000000000001);
	z = f2(0x1000000000000001, 0x1000000000000002);
	z = f3(0x1000000000000001, 0x1000000000000002, 0x1000000000000003);
	z = f4(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004);
	z = f5(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004,
	       0x1000000000000005);
	z = f6(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004,
	       0x1000000000000005, 0x1000000000000006);
	z = f7(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004,
	       0x1000000000000005, 0x1000000000000006, 0x1000000000000007);
	z = f8(0x1000000000000001, 0x1000000000000002, 0x1000000000000003, 0x1000000000000004,
	       0x1000000000000005, 0x1000000000000006, 0x1000000000000007, 0x000000000000008);
	return 0;
}
