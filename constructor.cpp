#include<iostream>
using namespace std;

class computer{
	public:
		// constructor has no return type
		computer(){
			cout<<"Constructor was call"<<endl;
			for(int i=0;i<5;i++){
				cout<<"I = "<<i<<endl;
			}
		}
		//destructure call after the construcutor by default
		~computer(){
			cout<<"Destructor was call"<<endl;
		}
};

int main(){
	// we don't need to call the constructor. It can call itself when we create the constructor
	computer Cons;
	return 0;
}
