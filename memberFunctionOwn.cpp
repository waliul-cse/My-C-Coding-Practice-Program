#include<iostream>

using namespace std;

class employee
{
	int basicSal;
	int houseRent;
public:
	employee()
	{
		basicSal = 0;
		houseRent = 0;
	}
	employee(int aSal, int aRent)
	{
		basicSal = aSal;
		houseRent = aRent;
	}
	void print()
	{
		cout<<"\n"<<"basicSal :"<<basicSal<<"\n";
		cout<<"\n"<<"houseRent :"<<houseRent<<"\n";
	}
};

class manager: public employee
{
	int mobileAllowance;
public:
	manager()
	{
		mobileAllowance = 0;
	}
	manager(int x, int y, int z):employee(y,z)
	{
		mobileAllowance = x;
	}
	void print()
	{
		cout<<"\n"<<"mobileAllowance :"<<mobileAllowance<<"\n";
		employee::print();
	}


};

int main()
{
	manager m(3,4,5);
	employee e(1,2);
	cout<<"printing manager info......\n";
	m.print();
	cout<<"printing employee info......\n";
	e.print();
	return 0;
}