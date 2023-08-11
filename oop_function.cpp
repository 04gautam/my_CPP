#include <iostream>

using namespace std;

// This is function in the oops with the help of this we can escape from--
// -- reepetation of the 'cout<< ' function;

class student{

public:

    string name;
    int age;

        void display(){ // this is the c++ function name 'display' which has name and age.

        cout<< "Name is: "<<name<<endl;
        cout<< "Age is: "<< age<<endl <<endl;

        }

};

int main()
{
    student d1 ,d2;

    d1.name = "Mango";
    d1.age = 12;

    d2.name = "Papaya";
    d2.age = 14;

    d1.display(); // This is the function calling

    d2.display(); // This is the function calling


    return 0;
}
