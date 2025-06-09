#include <iostream>
using namespace std;

class cat_family{
	cout<<"there are the many cat in this family"<<endl;
};

class Tiger:public cat_family{
	cout<<"tiger came to the cat family"<<endl;
};

class Lion:public cat_family{
	cout<<"Lion came to the cat family"<<endl;
};

class cat:public cat_family{
	cout<<"cat came to the cat family"<<endl;
};

class cheeta:public cat_family{
	cout<<"cheeta came to the cat family"<<endl;
};

int main() {
    linear_search();
    return 0;
}


