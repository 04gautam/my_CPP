#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

// This program show the output of list of purchased items.
// I used the file input/output so it will make a .txt file in your computer name {account}
// It will apand all the updated data in one file.
// and also current date and time .
// So this program is useful enough to contain all buying data with current time.

	class recept{
	public:
	string name;
	string f_name;
	string product;
	int mrp;
	int off;

	// let's make a constructor
	// to make constructor we take same name of class
	recept(string Name, string F_name,string Product, int Mrp, int Off ){
	name = Name;
	f_name = F_name;
	product = Product;
	mrp = Mrp;
	off = Off;
	}

// now for the output we will create a function of output

	void output(){

	//this will be saved in file today I achieced a new idea

	ofstream MyFile("account.txt", ios::app);

	MyFile<< "Name is: "<< name<<endl;
	MyFile<< "Father name: "<< f_name<<endl;
	MyFile<< "product: "<< product<<endl;
	MyFile<< "M.R.P: "<< mrp<<endl;
	MyFile<< "off: "<< off<<"%"<<endl;


	cout<< "Name: "<< name<<endl;
	cout<< "Father name: "<< f_name<<endl;
	cout<< "product: "<< product<<endl;
	cout<< "M.R.P: "<< mrp<<endl;
	cout<< "off: "<< off<<"%"<<endl<<endl;

	// this is all for time for without file we use cout<< instead of MyFile

	// here is time

	// Get the current time
	time_t currentTime = time(nullptr);


	// convert the time to a string format
	char* timeString = ctime(&currentTime);

	// display the updated time
	cout<< "Time: "<< timeString<<endl;
	cout<< "------------End-------------"<<endl;

	MyFile<< "Time: "<< timeString;
	MyFile<< "------------End-------------"<<endl;

	}
	};

int main()
{	
  //name [string]	father_name[string]	product[string]	mrp[int]	off[int]
	recept e1("Gautam","Hansraj singh",   "computer",   50000,      20);
	e1.output();

  return 0;
}
