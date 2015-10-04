#include<iostream>
using namespace std;

class base
{
public:
	virtual void vfunc()
	{
		cout<<"This is base's vfunc. \n";
	}
};

class derived1 : public base
{
public:
	void vfunc()
	{
		cout<<"This is derived1's vfunc().\n";
	}
};

class derived2 : public base
{
public:
	void vfunc()
	{
		cout<<"This is derived2's vfunc().\n";
	}
};


int main()
{
	base *p, b;
	derived1 d1;
	derived2 d2;

	p=&b;
	p->vfunc();
	b.vfunc();

	p=&d1;
	p->vfunc();
	d1.vfunc();

	p=&d2;
	p->vfunc();
	d2.vfunc();

	return 0;
}