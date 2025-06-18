#include<iostream>
using namespace std;

class Function{
	private:
		static int count;
	
	public:
		Function(){
			count++;
		}	
	static void show_count(){
		cout<<"Count = "<<count<<endl;
	}		
};

int Function::count(0);

int main(){
	Function obj1;
	Function obj2;
	Function obj3;
	Function::show_count();
	return 0;
}
