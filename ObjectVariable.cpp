#include<iostream>
using namespace std;
class StudentInfo
{
	int CGPA;
public:
	int fstSemGPA, scndSemGPA;
	StudentInfo()
	{
		fstSemGPA = 0;
		scndSemGPA = 0;
	}	
	void SetGPA(int x, int y)
	{
		fstSemGPA = x;
		scndSemGPA = y;
	}
	void caculateCGPA()
	{
		CGPA = fstSemGPA + scndSemGPA;
	}

	int getCGPA()
	{
		return CGPA;
	}
};

class Student
{
	int Roll;
public:
	StudentInfo stInfo;
public:
	Student()
	{
		Roll = 0;
	}
	Student(int x)
	{
		Roll = x;		
	}
	 void showStudentInfo()
	 {
		//StudentInfo objStudentInfo(2,4);
		 stInfo.SetGPA(2,4);
		stInfo.caculateCGPA();
		cout<<"Roll: "<<Roll<<endl<<"1st Semester GPA: "<< stInfo.fstSemGPA<<endl<<"2nd Semester GPA: "
			<< stInfo.scndSemGPA<<endl<<"CGPA: "<<stInfo.getCGPA()<<endl;
	 }
};

int main()
{
	Student objStudent(03);
	objStudent.showStudentInfo();
	objStudent.stInfo.fstSemGPA

	return 0;
}

