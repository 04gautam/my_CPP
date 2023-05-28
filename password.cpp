#include <iostream>
using namespace std;


int main()
{
	string password;
	char y , n;

for(int z = 4; z != 0; z--){
	cout<< "enter password to see information of stark"<<endl;
	cin>> password;

	if(password == "Stark@123"){
		cout<< "correct password"<<endl;

		cout<< "enter y for yes or n for no"<<endl;
		cin>> y;
		if(y == 'y'){
			cout<< "Name = HARSH GAUTAM"<<endl<<"Roll = 12"<<endl;
			cout<< "Address = BHONRA"<<endl<< "ADHAR = 123 234 4567"<<endl;
			}
			else if(n = 'n')
				{
				cout<< "OKAY you don't want to see information"<<endl;
			}
	}
	else{
		cout<< "wrong password TRY AGAIN"<<endl;
	}
//block of for
if(password == "Stark@123"){
	break;
}
else{
	cout<<"you have "<< z-1 << " attempts"<<endl;
}

}

    return 0;
}
