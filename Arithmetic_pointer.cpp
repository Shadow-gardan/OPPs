#include<iostream>
using namespace std;

//arithmetic operations on pointers

int main(){
	int num[]={23,34,45,12,56};
	int *ptr;
	int i;
	cout<<"the array values are: "<<endl;
	for(i=0;i<5;i++){
		cout<<num[i]<<endl;
	}
	ptr = num;
	cout<<"value of ptr : "<<*ptr;
	ptr++;
	cout<<"value of ptr++ : "<<*ptr<<endl;
	ptr--;
	cout<<"value of ptr-- : "<<*ptr<<endl;
	ptr=ptr+2;
	cout<<"value of ptr+2 : "<<*ptr<<endl;
	ptr=ptr-1;	
	cout<<"value of ptr-1 : "<<*ptr<<endl;
	ptr+=3;
	cout<<"value of ptr+=3 : "<<*ptr<<endl;
	ptr-=2;
	cout<<"value of ptr-=2 : "<<*ptr<<endl;
	
	return 0;
}
