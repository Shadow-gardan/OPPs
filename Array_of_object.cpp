#include<iostream>
using namespace std;

class employee{
	char name[30];
	float age;
	
	public:
		void get(void);
		void put(void);
};

void employee::get(void){
	cout<<"Enter the Name"<<endl;
	cin>>name;
	cout<<"enter the age"<<endl;
	cin>>age;
}

void employee::put(void){
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
}

const int size=3;
int main(){
	employee manager[size];
	for(int i=0;i<size;i++){
		cout<<"Details"<<i+1<<endl;
		manager[i].get();
	}
	for(int i=0;i<size;i++){
		cout<<"Manager"<<i+1<<endl;
		manager[i].put();
	}
	return 0;
}
