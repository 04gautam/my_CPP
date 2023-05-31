#include <iostream>

using namespace std;

int main()
{

	// this is the program of check of health
	// checking malaria 1 headache 2.body pain 3. strain in nack 4. red eyes
	//5. high heartbeat

	int counter = 0;
	string opt; // opt means option


	cout<< "____________________________"<<endl;
	cout<< "|      COVID-19 TEST       | " <<endl;
	cout<< "----------------------------"<<endl;

	cout<< "____________________________"<<endl;
	cout<< "|enter Y for yes, N for no | " <<endl;
	cout<< "----------------------------"<<endl;

	// this is for fever
	cout<< "Do you have Fever: "<<endl;
	cin>> opt;
	if(opt == "y" || opt== "Y"){
//
		counter = counter + 1;
		}
	else{
		counter = counter+ 0;
	}
// this is for cough
	cout<< " Do you have Cough : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}

	// this is about difficulty in breathing
	cout<< " Do you feel difficulty in breathing : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}
	// this is for Fatigue
	cout<< " Do you feel Fatigue : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}
	// here is about muscle or Body Aches

	cout<< " Do you have Muscle or Body Aches : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}
	// this is for Headache
	cout<< " Do you have Headache: "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}
// this is for Taste or smell
	cout<< " Did you loose Taste or smell : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}

	// here for Sore throat
	cout<< " Do you have Sore Throat [Pain in Throat] : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}
	// this is for Runny nose

	cout<< " Do you have Runny nose : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}


	cout<< " Do you feel vomiting : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}

	cout<< " Do you have Diarrhea : "<<endl;
	cin>> opt;
	if(opt== "y" || opt== "Y")
	{
		counter = counter+1;
	}

	else{
		counter = counter+0;
	}
	// here are 11 Questions for understanding this COVID-19 test
	// so logic is like this if greater then 5 is dangerous
	// cout<< "The score is: "<< counter <<endl;
	
	if(counter == 0){
		cout<<endl<<"***********************************************"<<endl;
		cout<< "You have not any symptoms of COVID-19 WHY HAVE YOU CAME HERE"<< endl;
		cout<<"_____________________________________________________"<<endl;
	}
	
	else if(counter <= 5){
		cout<<endl<<"***********************************************"<<endl;
		cout<< "You have not COVID-19 you need to take some medesion"<< endl;
		cout<<"_____________________________________________________"<<endl;

	}
	else if(counter <= 7){
		cout<<endl<<"********************************************"<<endl;

		cout<<"Don't worry you have not much symptoms"<<endl;
		cout<<"But you should go for Doctor: "<<endl;
		cout<<"*************************************************"<<endl;

	}
	else{
		cout<<endl<<"*************************************************"<<endl;

		cout<< "You have most of the symptoms of COVID-19"<<endl;
		cout<< "you should go for Doctor Promptly: "<<endl;

		cout<< "**************************************************"<<endl;
	}

	return 0;
}
