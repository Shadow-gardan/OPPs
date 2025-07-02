#include <iostream>
using namespace std;

class time{
	int hours;
	int minutes;
	
	public:
		void get(int h,int m){
			hours = h;
			minutes = m;
		}
		
		void put(void){
			cout<<hours<<"hours and ";
			cout<<minutes<<" minutes"<<endl;
		}
		
		// declaration with objects as arguments
		
		void sum(time, time);
};

void time::sum(time t1, time t2){
	minutes = t1.minutes + t2.minutes;
	hours = minutes/60;
	minutes = minutes%60;
	hours = hours+ t1.hours + t2.hours;	
}

int main() {
   	
   	time t1,t2,t3;
   	
   	t1.get(2,45);
   	t2.get(3,50);
   	
   	t3.sum(t1,t2);
   	
   	cout<<"t1 = "; t1.put();
   	cout<<"t2 = "; t2.put();
   	cout<<"t3 = "; t3.put();
   	
    return 0;
}

