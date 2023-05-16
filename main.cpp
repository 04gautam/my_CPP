#include <iostream>

using namespace std;
//
//class Employee{
//public:
//	string Name;
//	string Company;
//	int Age;
//
//void intro(){
//	cout<< "name is = " <<Name<<endl;
//	cout<<"company is = "<<Company<<endl;
//	cout<< "age is = " <<Age<<endl<<endl<<endl;
//}
//};

class student{
	public:
	string name;
	string school;
	int age;


	void intro(){
	cout<<"name = "<<name<<endl;
	cout<<"school = "<<school<<endl;
	cout<<"age = "<<age<<endl;

	}
};

int main()
{
	student student1;

	cin>>student1.name;
	cin>>student1.school;
	cin>>student1.age;
	student1.intro();


//	Employee employee1 , employee2;
//	employee1.Name = "hitlar gautam";
//	employee1.Company = "GOOGLE";
//	employee1.Age = 23;
//
//	employee1.intro();
//
//	employee2.Name = "gautam";
//	employee2.Company = "AMAZONE";
//	employee2.Age = 12;
//
//	employee2.intro();
//    return 0;
}
