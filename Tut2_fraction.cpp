#include<iostream>
using namespace std;

class fraction

{
private:

public:
	int num;
	int den;
	void add(fraction, fraction);
	void sub(fraction, fraction);
	void multi(fraction, fraction);
	void div(fraction, fraction);
	void setvalues();
};
void fraction::setvalues()
{
	cout << "Please enter numerator" << endl;
	cin >> num;
	cout << "Please enter denominator" << endl;
	cin >> den;
}
void fraction::add(fraction x, fraction y)
{
	num = (x.num*y.den) + (x.num*y.den);
	den = x.den*y.den;
}
void fraction::sub(fraction x, fraction y)
{
	num = (x.num*y.den) - (x.num*y.den);
	den = (x.den*y.den);
}
void fraction::multi(fraction x, fraction y)
{
	num = (x.num*y.num);
	den = (x.den *y.den);
}
void fraction::div(fraction x, fraction y)
{
	num = (x.num*y.den);
	den = (x.den *y.num);
}