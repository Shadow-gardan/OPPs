#include<iostream>
using namespace std;

class animal{
	public:
		animal(){
			cout<<"Animal Created"<<endl;
		}
};

class dog:virtual public animal{
		public:
			dog(){
				cout<<"Dog Created"<<endl;	
			}			
};

class cat: public dog{
		public:
			cat(){
				cout<<"cat Created"<<endl;	
			}			
};

int main(){
	cat obj1;
	return 0;
	
}
