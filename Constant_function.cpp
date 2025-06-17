#include<iostream>
using namespace std;

class Function{
	public:
		int x;
		int get()const{
				return x;
			}
		void set(int val){
			x = val;
		}
}; 

int main(){
	Function obj;
	obj.set(20);
	cout<<obj.get()<<endl;
	return 0;
}
