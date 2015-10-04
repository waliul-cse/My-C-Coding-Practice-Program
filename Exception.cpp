#include<iostream>
#include<String>
#include"cctype"
#include<conio.h>
using namespace std;
using std::string;
//using namespace System;
namespace Error
{	struct Syntax_error
	{	const char* p;
		Syntax_error(const char* q)
		{
			p = q;
		}
	};
	struct Divide_zero
	{
		const char* p;
		Divide_zero(const char* q)
		{
			p = q;
		}
	};
}

int main()
{
	char s[80];
	int i = 0, k =0;

	cout<<"enter a string"<<endl;

     cin>>s;


	//getline(cin, s);8
	try
	{
		while(s[i])
		{
			if(!isalpha(s[i]))
			{
				//cout<<s<<endl;
				throw Error::Syntax_error("not alpha");
			}
			i++;
		}

		if(k==0)
		{
			throw Error::Divide_zero("Divide by zero");
		}

		i = i/k;

		cout<<"No Exception!!!";
		getch();
		return 0;
	}
	catch(Error::Syntax_error e)
	{
		cout<<e.p<<endl;
	}
	catch(Error::Divide_zero e)
	{
		cout<<e.p<<endl;
	}
	getch();
	return 0;

}