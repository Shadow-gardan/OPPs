#include<iostream>
using namespace std;

class base{
	public:
		void display(){
			cout<<"display base\n";
		}
		
		virtual void show(){
			cout<<"show base"<<endl;
		}
};

class derived: public base{
	public:
		void display(){
			cout<<"display derived\n";
		}
		
		virtual void show(){
			cout<<"show derived";
		}
};

int main(){
	
	base b;
	derived d;
	base *bptr;
	derived *dptr;
	
	cout<<"\n bPtr point to base"<<endl;
	bptr = &b;
	bptr -> display();
	bptr -> show();
	
	cout<<"\n dPtr point to base"<<endl;
	dptr = &d;
	dptr -> display();
	dptr -> show();
	
	return 0;
}
