#include<iostream.h>
#include<conio.h>

class Student
{
	int rno;
	char *sname;
	public:
		void getData()
		{
			cout<<"\nEnter Roll No :";
			cin>>rno;
			cout<<"\nEnter Student Name";
			cin>>sname;
		}
		void putData()
		{
			cout<<"\nRoll No :"<<rno;
			cout<<"\nStudent Name" :<<sname;
		}
};
