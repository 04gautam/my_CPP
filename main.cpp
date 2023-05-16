#include <iostream>

using namespace std;
// now I am writing the code of encapulation
	class Student{

private:
	string Name;
	int Number;
	string F_name;

	public:
	int setNumber(int number){
	Number = number;

	}
	void setName(string name){
	Name = name;
	}
	int getNumber(){
	cout<< "Number is "<< Number<<endl;
	return Number;
	}
	void getName(){
	cout<< "Name is "<< Name<<endl;
//	return Name;
	}

	void setfname(string f_name){
	F_name = f_name;
	}
	void getfname(){
	cout<< "father name "<< F_name<<endl<<endl;
//	return F_name;
	}

	};
int main()
{
	Student s1, s2;
	s1.setName("hitlar gautam");
	s1.getName();

	s1.setNumber(233);
	s1.getNumber();

	s1.setfname("hansraj singh");
	s1.getfname();

	s2.setName("stark");
	s2.setfname("harvard stark");
	s2.getName();
	s2.setNumber(998);
	s2.getNumber();
	s2.getfname();
	Student s3;
	s3.setName("papaya");
	s3.setNumber(122);
	s3.getNumber();
	s3.getName();
    return 0;
}
