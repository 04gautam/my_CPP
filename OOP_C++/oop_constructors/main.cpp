#include <iostream>

using namespace std;

// now this is constructor which can help us to reduce the code

class student{
public:

    string Name;
    string F_name;
    int Age;

//This is constructor and this is always
//-- started with the same name as class name in this case 'student'

    student(string name ,string f_name, int age){

    Name = name;
    Age = age;
    F_name = f_name;
    }

    void display(){
    cout<< "Name is: "<< Name<<endl;
    cout<< "Father Name is: "<< F_name<<endl;
    cout<< "Age is: "<< Age<<endl<<endl;
    }

};

int main()
{

    student e1("Stark","Harverd", 12); // Information of object

    student e2("Mango","Papaya",10);
    e1.display(); // this is function calling

    e2.display(); //function calling


    return 0;
}
