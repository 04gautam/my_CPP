#include <iostream>

using namespace std;

//Now I am writing the code of object oriented programming in c++

//This is the class Name student
class student{

public: // Now we will have to public the content

    string Name;
    string F_name;
    int Roll_no;

    void display(){     // This is the function that will display..
                        // ..the data of objects

    cout<<"Name: "<<Name<<endl;
    cout<< "Father Name: "<<F_name<<endl;
    cout<< "Roll no.: "<<Roll_no<<endl;

    }

};//<--class block should be close with the semi colon

int main()
{
    //firstly we write the name of class in this case "student"
    //then we can make the our object in this case "s1"

    student s1;

    s1.Name = "Hitlar";
    s1.F_name = "Hansraj";
    s1.Roll_no = 12;

    s1.display(); //Calling function


    return 0;
}
