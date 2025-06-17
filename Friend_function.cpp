#include<iostream>
using namespace std;

class Function{
	private:
		int x;
	public:
		Function():x(100){}
		
		friend void display(const Function & obj);
		
		
}; 
void display(const Function & obj){
	
	cout<<"x = "<<obj.x<<endl;
	
}
int main(){
	Function obj;
	display(obj);
	return 0;
}
