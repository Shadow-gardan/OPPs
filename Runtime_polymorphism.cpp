#include<iostream>
#include<cstring>
using namespace std;

class media{
	
	protected:
		char title[50];
		float price;
		
	public:
		media(char * s,float a){
			strcpy(title,s);
			price = a;
		}
		
		virtual void display() = 0; // Made it pure virtual
};

class book: public media{
	int pages;
	
	public:
		book(char *s, float a, int p):media(s,a){
			pages = p;
		}
	void display();	
};

class tape: public media{
	float time;
	
	public:
		tape(char *s, float a, float t):media(s,a){
			time = t;
		}
	void display();	
};

void book::	display(){
	cout<<"\n title: "<<title;
	cout<<"\n pages: "<<pages;
	cout<<"\n price: "<<price;
}

void tape::	display(){
	cout<<"\n title: "<<title;
	cout<<"\n Time: "<<time<<" mins";
	cout<<"\n price: "<<price;
}

int main(){
	
	char * title = new char[50];
	float price,time;
	int pages;
	
	
	cout<<"Enter the book details"<<endl;
	cout<<"Title: ";cin.getline(title, 50);
	cout<<"price: ";cin>>price;
	cout<<"pages: ";cin>>pages;
	cin.ignore(); 
	
	book book1(title,price,pages);
	
	cout<<"Enter tape details"<<endl;
	cout<<"Title: ";cin.getline(title, 50);
	cout<<"price: ";cin>>price;
	cout<<"Time(mins): ";cin>>time;
	
	tape tape1(title,price,time);
	
	media* list[2];
	list[0]= &book1;
	list[1]= &tape1;
	
	cout<<"\n media details";
	
	cout<<"\n------BOOK------";
	list[0] -> display();
	
	cout<<"\n------Tape------";
	list[1] -> display();
	
	delete[] title;
	
	return 0;
}

