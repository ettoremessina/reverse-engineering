#include <iostream>

float sumf(float a, float b)
{
	return a + b;
}

double sumd(double a, double b)
{
	return a + b;
}

long double sumld(long double a, long double b)
{
	return a + b;
}

double fd10(double a, double b, double c, double d, double e,
            double f, double g, double h, double i, double j)
{
	return a + b + c + d + e + f + g + h + i + j;
}

long double fld4(long double a, long double b,
                 long double c, long double d)
{
	return a + b + c + d;
}

int main()
{
	float f1 = 123.456f;
	float f2 = 456.789f;
	double d1 = 987.654;
	double d2 = 654.321;
	long double ld1 = 12345.6789;
	long double ld2 = 9876.54321;

	float fs = f1 + f2;
	fs = f1 - f2;
	fs = f1 * f2;
	fs = f1 / f2;

	double ds = d1 + d2;
	ds = d1 - d2;
	ds = d1 * d2;
	ds = d1 / d2;

	double lds = ld1 + ld2;
	ds = ld1 - ld2;
	ds = ld1 * ld2;
	ds = ld1 / ld2;

	fs = sumf(f1, f2);
	ds = sumd(d1, d2);
	lds = sumld(ld1, ld2);

	double dtotal = fd10(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0);
	long double ldtotal = fld4(1.0L, 2.0L, 3.0L, 4.0L);
	
	std::cout
		<< sizeof(float)
		<< std::endl
		<< sizeof(double)
		<< std::endl
		<< sizeof(long double)
		<< std::endl
		<< "fs=" << fs 
		<< std::endl
		<< "ds=" << ds 
		<< std::endl
		<< "lds=" << lds 
		<< std::endl
		<< "dtotal=" << dtotal 
		<< std::endl
		<< "ldtotal=" << ldtotal 
		<< std::endl;

	return 0;
}
