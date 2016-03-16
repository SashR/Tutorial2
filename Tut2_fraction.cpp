#include <iostream>
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
	void print(fraction);
};

int hcf(int, int);

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
int hcf(int j, int k)
{
	int l = j % k;
	while (l != 0)
	{
		j = k;
		k = l;
		l = j % k;
	}
	return k;
}

void print(fraction x)
{
		cout << x.setvalues() << endl;
}
int main()
{   
	fraction f1;
	fraction f2;
	fraction f3;
	fraction f4;
	fraction f5;
	fraction f6;

	cout << "fraction 1" << endl;
	f1.setvalues();
	cout << "fraction 2" << endl;
	f2.setvalues();
	f3.add(f1, f2);
	f4.sub(f1, f2);
	f5.multi(f1, f2);
	f6.div(f1, f2);

	cout << "addition of fractions:";
	print(f3);
	cout << "subtraction of fractions:";
	print(f4);
	cout << "multiplication of fractions:";
	print(f5);
	cout << "division of fractions:";
	print(f6);

	return 0;

}