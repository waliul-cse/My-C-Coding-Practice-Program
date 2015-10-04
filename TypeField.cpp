#include<iostream>
#include <list>
using namespace std;
class employee
{
public:
	int basicSal;
	int houseRent;
	enum emplType
	{
		M,E
	};
	emplType type;
	employee()
	{
		basicSal = 0;
		houseRent = 0;
		type = E;
	}
	employee(int aSal, int aRent)
	{
		basicSal = aSal;
		houseRent = aRent;		
		type = E;
	}
	/*void print()
	{
		cout<<"\n"<<"basicSal :"<<basicSal<<"\n";
		cout<<"\n"<<"houseRent :"<<houseRent<<"\n";
	}*/
};

class manager: public employee
{
public:
	int mobileAllowance;
	

	manager()
	{
		mobileAllowance = 0;
		type = M;
	}
	manager(int x, int y, int z):employee(y,z)
	{
		mobileAllowance = x;
		type = M;
	}
	/*void print()
	{
		cout<<"\n"<<"mobileAllowance :"<<mobileAllowance<<"\n";
		employee::print();
	}*/


};

void printEmployee(const employee* e)
{
	switch(e->type)
	{
	case employee::E:
		cout<<"employee \n";
		break;
	case employee::M:
		cout<<"manager \n";
		break;
	default:
		break;
	}
}

void printList(const list<employee*> &elist)
{
	for(list<employee*>::const_iterator p = elist.begin(); p != elist.end(); ++p)
		printEmployee(*p);
}

int main()
{
	manager m(3,4,5);
	employee e(1,2);
	list<employee*> empl;
    empl.push_front(&m);
	empl.push_front(&e);
	printList(empl);
	/*cout<<"printing manager info......\n";
	m.print();
	cout<<"printing employee info......\n";
	e.print();*/
	return 0;
}