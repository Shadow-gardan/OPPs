#include<iostream>
using namespace std;

void Print(int i){
	cout<<i<<" = It was a integer "<<endl;
}

void Print(char C){
	cout<<C<<" = It was a character"<<endl;
}

void Print(double d){
	cout<<d<<" = It was a double"<<endl;
}

void Print(string S){
	cout<<S<<" = It was a String"<<endl;
}



int main(){
	
	Print(10);
	Print('c');
	Print(1.5);
	Print("Hello");
	return 0;
}
