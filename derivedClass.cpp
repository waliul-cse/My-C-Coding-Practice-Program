#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
public:
	int i;
	int j;
};
class Manager : public Employee
{
public:
	int k;
};

int main()
{
	Employee ee;
	Manager mm;
	Employee* pe = &mm;
	Manager* cm  = &ee;
	Manager* pm = static_cast<Manager*>(pe);
	//pm->k;

	getch();
	return 0;
}