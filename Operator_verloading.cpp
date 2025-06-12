#include<iostream>
using namespace std;

class space{
	int x;
	int y;
	int z;
 public:
 	void get(int a, int b, int c);
 	void display(void);
 	void operator -();
};

void space::get(int a, int b, int c){
	x=a;
	y=b;
	z=c;
}

void space::display(void){
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
}

void space::operator -(){
	x = -x;
	y = -y;
	z = -z;
}

int main(){
	space s;
	s.	get(12,54,-32);
	cout<<"s :";
	s.display();
	
	-s;
	cout<<"s :";
	s.display();
	
	return 0;
}
