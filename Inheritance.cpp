#include<iostream.h>
#include<conio.h>
    class exforsys
    {
    public:
	exforsys(void)
	{
		x=0;
	}
	void f(int n1)
	{
		x= n1*5;
	}

	void output(void)
	{
		cout<<x<<endl;
	}

    private:
	int x;
    };

    class sample: public exforsys
    {
    public:
	sample(void)
	{
		s1=0;
	}

	void f1(int n1)
	{
		s1=n1*10;
	}

	void output(void)
	{
		exforsys::output();
		cout << s1<<endl;
	}

    private:
	int s1;
    };

    int main(void)
    {
	clrscr();
	sample s;
	s.f(10);
	s.output();
	s.f1(20);
	s.output();
	return 0;
    }
