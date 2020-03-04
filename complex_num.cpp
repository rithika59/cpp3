/*Implement complex number ( both real and imaginary components must be implemented as float) class with default and parameterise constructors along with member function to read , write ,add two complex numbers , subtract two complex numbers and compare to complex numbers. */


#include<iostream>
using namespace std;

class Complex
{
	float real;
	float img;

	public:
		Complex():real(0),img(0)
		{
			cout<<"calling default constructor"<<endl;
		}

		Complex(float r,float i):real(r),img(i)
		{
			cout<<"calling parameterise constructor"<<endl;
		}
		void read()
		{
			cout<<"Enter the complex number"<<endl;
			cin>>real>>img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		Complex add(Complex &a)
		{
			Complex t;
			t.real = real+a.real;
			t.img = img+a.img;
			return t;
		}
		Complex subtract(Complex &b)
		{
			Complex p;
			p.real = real - b.real;
			p.img = img - b.img;
			return p;
		}
		bool compare(Complex &d)
		{
			if(real == d.real && img == d.img)
				return true;
			else
				return false;
		}
};

int main()
{
	Complex c1;
	Complex c2(2,3);
	
	c1.read();
	cout<<"First complex number is: \n";
	c1.display();
	cout<<"Second complex number is: \n";
	c2.display();
	Complex c3 = c1.add(c2);
	cout<<"Addition result is: \n";
	c3.display();
	Complex c4 = c1.subtract(c2);
	cout<<"Subtraction result is:\n";
	c4.display();
	cout<<"Comparing both complex numbers \n";
	(c1.compare(c2))?cout<<"Complex numbers are equal"<<endl:cout<<"Complex numbers are not equal"<<endl;

	return 0;
}
