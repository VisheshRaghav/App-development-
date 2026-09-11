#include<iostream>
using namespace std;

int main(){
	cout<<"do you want to play game .Enter YES(y) OR NO(n) :   ";
	char x;
	cin>>x;
	if(x=='y'){
	cout<<"we have many games to play "<<endl<<"1. Making magic square "<<endl<<"2. Number guessing "<<endl<<"3. Guessing DOB"<<endl<<"Enter the game serial number which you want to play :  ";
		int z;
		cin>>z;
		if(z==1){
			 cout<<"enter your date of birth as DD MM YY YY :  ";
			 int a;
			 int b;
			 int c;
			 int d;
			 cin>>a>>b>>c>>d;
			 cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<endl;
			  cout<<d+1<<"   "<<c-1<<"   "<<b-3<<"   "<<a+3<<"   "<<endl;
			cout<<b-2<<"   "<<a+2<<"   "<<d+2<<"   "<<c-2<<"   "<<endl;
			    cout<<c+1<<"   "<<d-1<<"   "<<a+1<<"   "<<b-1<<"   "<<endl;
		}else if(z==2){
			cout<<"choose a number from 1 to 9 :  ";
			int e;
			cin>>e;
			cout<<"multiply it by 2 : ";
			int f;
			cin>>f;
			int g;
			int h;
			char i;
			cout<<"add 10 to it : ";
			cin>>g;
			cout<<"now divide it by 2 : ";
			cin>>h;
			cout<<"subtract the nymber you choose : ";
			cout<<"are you ready to see answer press j"<<endl;
			cin>>i;
			if(i=='j'){
				cout<<"your answer is 5 "<<endl<<e<<"is the number you choose";
			}}
			else if (z==3){
				int k;
				int l;
				int m;
				int n;
				int o;
				int p;
				int q;
				cout<<"month *5 : ";
				cin>>k;
				cout<<"add 6: ";
				cin>>l;
				cout<<"multiply by 4: ";
				cin>>m;
				cout<<"add 9 : ";
				cin>>n;
				cout<<"multiply by 5: ";
				cin>>o;
				cout<<"add date of your birth : ";
				cin>>p;
				cout<<"subtract 165 "<<endl;
				cin>>q;
				cout<<"its your date of birth"<<endl;
				}

				
			}
		
		
		
		
		
		
		
		
		
		
	}

