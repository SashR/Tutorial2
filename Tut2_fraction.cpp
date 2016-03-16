#include<iostream>
using namespace std;

class fraction

{
private:

public:
	int num;
	int den;
	void Add(fraction, fraction);
	void Sub(fraction, fraction);
	void Multi(fraction, fraction);
	void Div(fraction, fraction);
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
