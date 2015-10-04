#include<iostream>
#include<conio.h> 
using namespace std;
class Date
{
	int day;
	int month;
	int year;
public:
	Date(int d, int y, int m)
	{
		day = d;
		month = m;
		year = y;
	}
	Date& addDay(int dSum)
	{
		day = day + dSum;
		return *this;
	}
	Date& addMonth(int mSum)
	{
		month = month + mSum;
		return *this;
	}
	Date& addYear(int ySum)
	{
		year = year + ySum;
		return *this;
	}

	void showDate()
	{
		cout<<"day = "<<day<<endl<<"month = "<<month<<endl<<"year = "<<year;
	}
};

int main()
{
	Date d(10,10,10);

	d.addDay(1).addMonth(2).addYear(3);
	d.showDate();

	getch();
	return 0;
}