#include<iostream>
using namespace std;

class bc{
	public:
		int b;
		void show(){
			cout<<"b = "<<b<<endl;
		}
};

class dc:public bc{
	public:
		int d;
		void show(){
			cout<<"b = "<<b<<endl;
			cout<<"d = "<<d<<endl;
		}
};

int main(){

	bc *bptr;
	bc base;
	bptr = &base;
	
	bptr->b = 100;
	cout<<"bptr point to base"<<endl;
	bptr->show();
	
	dc derived;
	bptr = &derived;
	bptr->b = 200;
	
	cout<<"bptr now point to derived"<<endl;
	bptr->show();
	
	dc *dptr;
	dptr = &derived;
	dptr->d = 300;
	
	cout<<"bptr now point to derived"<<endl;
	bptr->show();
	
	cout<<"using ((dc*)bptr)"<<endl;
	((dc*)bptr)->d = 400;
	((dc*)bptr)->show();
	
	
	return 0;
}
