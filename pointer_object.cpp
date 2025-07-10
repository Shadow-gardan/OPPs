#include<iostream>
using namespace std;

//pointer to object

class item{
	int code;
	float price;
	public :
		void get(int a,float b){
			code =a;
			price=b;
		}
		
		void show(void){
			cout<<"code : "<<code<<endl;
			cout<<" price :  "<<price<<endl;
		}
};

const int size =2;

int main(){

	item *p = new item[size];
	item *b = p;
	int x,i;
	float y;
	for(i=0;i<size;i++){
		cout<<"Input code and price for item"<<i+1;
		cin>>x>>y;
		p->	get(x,y);
		p++;
	}
	
	for(i=0;i<size;i++){
		cout<<"item "<<i+1<<endl;
		b->show();
		b++;
	}
	
	return 0;
}
