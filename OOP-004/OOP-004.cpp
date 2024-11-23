#include <iostream>

using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction() : numerator(1),denominator(1) {}
	Fraction(int value) : numerator(value), denominator(value) {}
	Fraction(int numerator,int denominator) : numerator(numerator), denominator(denominator) {}

	Fraction& operator+(const Fraction& other)
	{
		Fraction temp;
		temp.numerator = numerator * other.denominator + other.numerator * denominator;
		temp.denominator = denominator * other.denominator;
		return temp;
	}
	Fraction& operator-(const Fraction& other)
	{
		Fraction temp;
		temp.numerator = numerator * other.denominator - other.numerator * denominator;
		temp.denominator = denominator * other.denominator;
		return temp;
	}
	Fraction& operator*(const Fraction& other)
	{
		Fraction temp;
		temp.numerator = numerator * other.numerator;
		temp.denominator = denominator * other.denominator;
		return temp;
	}
	Fraction& operator/(const Fraction& other)
	{
		Fraction temp;
		temp.numerator = numerator * other.denominator;
		temp.denominator = denominator * other.numerator;
		return temp;
	}
};

class Complex
{
	int valid;
	int imaginary;
public:
	Complex() : valid(0), imaginary(0){}
	Complex(int value) : valid(value), imaginary(value){}
	Complex(int valid, int imaginary) : valid(valid), imaginary(imaginary){}

	Complex& operator+(const Complex& other)
	{
		Complex temp; 
		temp.valid = valid + other.valid; 
		temp.imaginary = imaginary + other.imaginary;
		return temp; 
	}
	Complex& operator-(const Complex& other)
	{
		Complex temp; 
		temp.valid = valid - other.valid; 
		temp.imaginary = imaginary - other.imaginary;
		return temp; 
	}
	Complex& operator*(const Complex& other)
	{
		Complex temp;
		temp.valid = valid * other.valid - imaginary * other.imaginary;
		temp.imaginary = imaginary * other.valid + valid * other.imaginary;
		return temp; 
	}
	Complex& operator/(const Complex& other)
	{
		Complex temp;  
		temp.valid = ((valid * other.valid) + (imaginary * other.imaginary)) / ((other.imaginary * other.imaginary) + (other.valid * other.valid));
		temp.imaginary = ((imaginary * other.valid) - (valid * other.imaginary)) / ((other.imaginary * other.imaginary) + (other.valid * other.valid));
		return temp; 
	}
};

int main()
{

}