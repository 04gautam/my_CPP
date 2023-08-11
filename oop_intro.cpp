#include <iostream>

using namespace std;


//This is the object oriented programming.

//Where is a class and its the description of that object


 class student{ //This is student name class

    public:   // It should be public else it won't work

     string name;
     int age;

    };
int main()
{

    student e1 , e2 ,e3; //These e1, and e2 are object followed by class

    e1.name = "Harsh"; //First student name set.

    e1.age = 20; // first student age set.


    e2.name = "Gautam"; //Second student Name set.

    e2.age = 19; // second student age set.



    //The output of the all above data
   cout<< e1.name << endl; //Name is followed by object

   cout<< e1.age << endl<< endl;

   cout<< e2.name << endl;
   cout<< e2.age << endl<<endl;

   cout<<"Enter your name and age:"<<endl;
   cin>> e3.name; // We can also give the input through keyboard.
   cin>> e3.age;

   cout<< e3.name<<endl;
   cout<< e3.age<<endl;

    return 0;
}
