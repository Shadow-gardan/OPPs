#include<iostream>
using namespace std;

typedef void (*funPtr)(int ,int);
void add(int i,int j){
	cout<<i<<" + "<<j<<" = "<<i+j<<endl;
}
void sub(int i,int j){
	cout<<i<<" - "<<j<<" = "<<i-j<<endl;
}

int main(){
	funPtr ptr;
	ptr = &add;
	ptr(2,4);
	ptr(9,4);
	
	cout<<endl;
	
	ptr = &sub;
	ptr(6,3); 
	ptr(7,3);
	return 0;
}
