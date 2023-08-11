#include <iostream>

using namespace std;

// now this is constructor which can help us to reduce the code

class student{
public:

    string name;
    int age;

//This is constructor and this is always
//-- started with the same name as class name in this case 'student'.
    student(string Name, int Age){

    name = Name;
    age = Age;
    }

    void display(){
    cout<< "Name is: "<< name<<endl;
    cout<< "Age is: "<< age<<endl<<endl;
    }

};

int main()
{
    student e1("stark", 12); // Information of object

    student e2("mango",10);
    e1.display(); // this is function calling

    e2.display(); //function calling
    return 0;
}
