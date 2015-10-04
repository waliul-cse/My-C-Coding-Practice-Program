#include<iostream>

using namespace std;



class Date
{

	int d, m, y;

	static Date default_Date;

public:

	Date(int dd = 0, int mm = 0, int yy = 0);
	
	

	static void setDefault(int dd, int mm, int yy);
	static void show()
	{
		cout<<Date::default_Date.d<<endl;
	}

};

Date::Date(int dd, int mm, int yy)
	{
		d = dd?dd:default_Date.d;
		m = mm?mm:default_Date.m;
		y = yy?yy:default_Date.y;
	}

Date Date::default_Date;

void Date::setDefault(int d, int m, int y)
{
	default_Date = Date(d,m,y);
}

int main()
{
	Date::setDefault(4,5,1945);
	Date::show();


	
	return 0;

}