#include <iostream>

using namespace std;

	void card_enter(){
	char opt;
	cout<< "******************"<<endl;
	cout<< "Enter your card"<<endl;
	cout<< "*****************"<<endl;
	cout<< " "<<endl;

	one_more:
	cout<<"Is your card detected [y] for yes, [n] for no"<<endl;
	cin>> opt;
	if (opt != 'y'){
		cout<< "******************"<<endl;
		cout<< "Re enter your card"<<endl;
		cout<< "******************"<<endl;
		cout<< " "<<endl;
		goto one_more;
	}else{
	cout<< "OK good now"<<endl;

	}
	}
	void password(){
	int pass =  8989;
	int check;
	re:
	cout<< "Enter your password"<<endl<<endl;
	cin>> check;
	if(check != pass){
		cout<< "*** wrong password*** try again"<<endl<<endl;
		goto re;
	}else{
	cout<< "Welcome correct password"<<endl<<endl;
	}
	}
		void rupee(){
		int rs = 1000;
		int vid_rs;
		reenter:
	cout<< "Enter your rupee"<<endl<<endl;
	cin>> vid_rs;
	if(vid_rs > rs){
			cout<< "SORRY   :("<<endl<<endl;
		cout<<" You don't have this much balance:"<<endl<<endl;
		goto reenter;
	}else{
	cout<< " here is your "<<vid_rs <<" rs"<<endl<<endl;
	cout<< " Now you have only "<< rs-vid_rs<<" balance in your account: out of "<<rs<<endl<<endl;
	}
	}
int main()
{
	card_enter();
	password();
	rupee();

    return 0;
}
