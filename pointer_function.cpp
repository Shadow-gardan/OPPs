#include<iostream>

using namespace std;

// pointer to function

typedef void (*funptr)(int , int);

void add(int i, int j){
	cout<<i<<"+"<<j<<" = "<<i+j<<endl;
}

void sub(int i, int j){
	cout<<i<<"-"<<j<<" = "<<i-j<<endl;
}

int main(){
	funptr ptr;
	ptr = &add;
	ptr(1,2);
	cout<<endl;
	ptr = &sub;
	ptr(3,1);
}
