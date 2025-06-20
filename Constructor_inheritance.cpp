#include<iostream>
using namespace std;

class animal{
	public:
		animal(){
			cout<<"Animal Created"<<endl;
		}
		virtual~animal(){
			cout<<"Animal Destroyed"<<endl;
		}
};

class dog:public animal{
		public:
			dog(){
				cout<<"Dog Created"<<endl;	
			}
			~dog(){
				cout<<"Dog Destroyed"<<endl;
			}			
};


int main(){
	dog obj1;
	return 0;
	
}
