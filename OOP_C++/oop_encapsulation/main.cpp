#include <iostream>

using namespace std;


// This is encapsulation in c++

    class student{  // Here we are defining a class of student name.
private:            // In encapsulation we do private all the variables
    string Name;
    string Father_name;
    int Roll;



public:          //and we do public all the functions from here

    void setName(string name){  //This is seters function in which we give argument..
                                //..we give a variable same data type of main variable
    Name = name;                // Then it should be equal to original variable
    }

    string getName(){ //We use geters function of variable data type
    return Name;      // and return the original variable name so that we..
    }                 // ..access it later


    void setFather_name(string father_name){
        Father_name = father_name;
    }

    string getFather_name(){
    return Father_name;
    }


    void setRoll(int roll){
    Roll = roll;
    }

    int getRoll(){
    return Roll;
    }

/*
    void display_data(){
    cout<< "Name: "<< Name<<endl;
    cout<< "Father name: "<< Father_name<<endl;
    // cout<< "Roll number: "<< Roll<<endl<<endl;
    }
*/
    };



int main()
{



    student s1, s2;  // Here we made the two objects

    s1.setName("Tony Stark");   //use set to set or write the Name or any data..
    s1.setFather_name("Haward"); //..and so on
    s1.setRoll(23);

    s2.setName("Mango");
    s2.setFather_name("Papaya");
    s2.setRoll(17);

    cout<< s1.getName()<<endl;  //Now we are using the get to get the data
    cout<< s1.getFather_name()<<endl;
    cout<< s1.getRoll()<<endl<<endl;

    cout<< s2.getName()<<endl;
    cout<< s2.getFather_name()<<endl;
    cout<< s2.getRoll()<<endl;



    return 0;
}
