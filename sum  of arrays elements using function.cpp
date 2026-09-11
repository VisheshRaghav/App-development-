#include<iostream>
using namespace std;

void sum(int arr[], int x){
int y=0;
	for(int i=0;i<x;i++){
		y=y+arr[i];
	}		cout<<y;

}
int main(){
	int x;
	cout<<"enter your number: ";
	cin>>x;
	int arr[x];
	cout<<"enter youer elements: ";
	for(int i=0;i<x;i++){
//		int q;
//		cin>>q;       we can use these 3 lines in place of cin>>arr[i]
//		arr[i]=q;
		cin>>arr[i];
	}
	cout<<"sum of elements: ";
	sum(arr, x);
}
