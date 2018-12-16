#pragma once

class LiczbaZespolona
{
	double real;
	double imag;

public:
	LiczbaZespolona();
	LiczbaZespolona(double arg);
	LiczbaZespolona(double _real, double _imag);
	LiczbaZespolona(const LiczbaZespolona&);
};
