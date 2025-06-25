#include <iostream>
using namespace std;

class Incapsulation{
	public:
		Incapsulation(){
			cout<<"They are the part of Incapsulation"<<endl;
			cout<<"It was a public"<<endl;
			Private();
			Protected();
		}
	private:
		void Private(){
			cout<<"It was a private"<<endl;
		}
	protected:
		void Protected(){
			cout<<"It was a protected"<<endl;
		}
};

int main() {
	
	Incapsulation obj;
	
    return 0;
}

