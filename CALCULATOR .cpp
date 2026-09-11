#include<iostream>
using namespace std;
int main(){
	double x,y;
	char z;
	cout<<"CALCULATOR"<<endl<<endl<<endl<<endl;
	cin>>x;
	cin>>z;
	cin>>y;
	cout<<endl;
	if(z=='+'){
		cout<<"="<<(double)x+y;
	}else if(z=='*'){
		cout<<"="<<(double)x*y;
	}else if(z=='/'){
		cout<<"="<<(double)x/y;
	}else if(z=='-') {cout<<"="<<(double)x-y;
	}
}

