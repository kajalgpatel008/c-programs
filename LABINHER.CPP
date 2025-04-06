#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Person
{
	char name[50];
	int age;
	public:
		void getperson()
		{
			cout<<"\nEnter Name : ";
			gets(name);
			cout<<"\nEnter Age: ";
			cin>>age;
		}
		void displayperson()
		{
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<age;
		}
};

class Teacher:public Person
{
	int subject;
	public:
		void getteacher()
		{
			cout<<"\Enter Subject : ";
			cin>>subject;
		}
		void displayteacher()
		{
			cout<<"\nSubject : "<<subject ;
		}
};
class Student:public Person
{
	 int studentid;
	 public:
		void getstudent()
		{
			cout<<"\nEnter Studentid : ";
			fflush(stdin);
		}
		void displaystudent()
		{
			cout<<"\nStudentid : "<<studentid;
		}
};
void main()
{
	Student s1;
	Teacher t1;
	clrscr();
	s1.getperson();
	t1.getteacher();
	s1.getstudent();
	s1.displayperson();
	t1.displayteacher();
	s1.displaystudent();
	getch();
}