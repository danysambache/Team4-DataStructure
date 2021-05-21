#include <iostream>

using namespace std;

class Operations{	
	private: 
		float a,b;
		
	public:
		Operations(float, float);
		
		float add(float a,float b){
			return a+b;
		};					
};

Operations::Operations(float a_1, float b_2){
	a=a_1;
	b=b_2;
}

int main(){
	float a,b;
	cout<<"Please, enter your number: ";
	cin>>a;
	cout<<"Please, enter your number: ";
	cin>>b;
	
	Operations ope = Operations(a,b);
	cout<<"ADD = "<<ope.add(a,b);
};







