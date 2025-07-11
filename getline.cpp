#include<iostream>
#include<string>
using namespace std;



int main(){
	
	int size = 10;
	char city[20];
	
	cout<<"Enter the city name "<<endl;
	cin>>city;
	cout<<"City name : "<<city<<endl<<endl;
	
	cout<<"Enter the city name again "<<endl;
	cin.getline(city,size);
	cout<<"City name : "<<city<<endl;
	
	cout<<"Enter the city name again "<<endl;
	cin.getline(city,size);
	cout<<"City name : "<<city<<endl;
	
	
	return 0;
}
