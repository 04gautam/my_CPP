#include <iostream>

using namespace std;

//This is inheritance in c++

    class Animal{
    public:

        void sound(){
        cout<< "Animal make sound. It would be any sound: "<<endl;
        }
    };

    class Dog: public Animal{
    public:

    void dog_sound(){
    cout<< "All dogs bark. I have't seen any dog who can speak like human"<<endl;
    }

    };

int main()
{


    Animal anAnimal;

    Dog myDog;
    anAnimal.sound();
    myDog.dog_sound();


    return 0;
}
