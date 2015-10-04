// namespace1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

namespace add1
{
	void add(){cout<<"add"<<endl;}
}


int main()
{
	using namespace add1;
	add();
	return 0;
}

