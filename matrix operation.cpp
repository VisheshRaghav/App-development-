#include<iostream>
using namespace std;

int main(){
	char x;
	cout<<"if your question is about matrix then pls press (Y) key otherwise press (N) key: ";
	cin>>x;
	if(x=='Y'||x=='y'){
		//cout<<"We have many kind of operation of matrix such as:"<<endl<<"1> Transpose of matrix "<<endl<<"2> Addation of two matrix"<<endl<<"3> Subtraction of two  matrix"<<endl<<"4> Multiplication of two matrix"<<endl<<"5> Showing only digonal elements of a matrix"<<endl<<"which operation you want enter its serial number: ";
		cout<<"We have many kind of operation of matrix such as:"<<endl;
		cout<<"1> Transpose of matrix "<<endl;                            //WE CAN ALSO WRITE THESE LINES AS GIVEN ABOVE
		cout<<"2> Addation of two matrix"<<endl;
		cout<<"3> Subtraction of two  matrix"<<endl;
		cout<<"4> Multiplication of two matrix"<<endl;
		cout<<"5> Showing only digonal elements of a matrix"<<endl;
		cout<<"which operation you want enter its serial number: ";
		int a;
		cin>>a;
		cout<<endl<<endl;
		if(a==1){
			int v;
			cout<<"There are two methods of transpose : "<<endl;
			cout<<"1> By making two matrix (array) "<<endl;
			cout<<"2> By itself without making any other array"<<endl;
			cout<<"Enter serial number of method by which you want to make it: ";
			cin>>v;
			cout<<endl<<endl<<endl<<endl;
			cout<<"REMEMBER THAT YOU WILL SEE THE SAME RESULT BY BOTH METHODS BUT, IF YOU WANT TO SEE THE DIFFERENCE YOU WILL HAVE TO READ THE CODE "<<endl<<endl<<endl<<endl;
			if(v==1){//          BY MAKING TWO MATRIX
			int x,y;
	cout<<"enter number of rows and clm of matrix: ";
	cin>>x>>y;
	int arr[x][y];
	cout<<"enter elements of matrix: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}cout<<endl;
	int arr1[y][x];
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			arr1[i][j]=arr[j][i];
		}
	}
	cout<<"Matrix that you made: "<<endl;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
	
	cout<<"Transpose of matrix: "<<endl;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}		
		cout<<endl<<"This program ends run again for options again"<<endl;
		cout<<"                  THANK  YOU                 ";				
	}
			
			
			
			if(v==2){//                BY ITSELF
		int x;
	cout<<"enter side of a square matrix: ";
	cin>>x;
	int arr[x][x];
	cout<<"enter elements of matrix: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"Original matrix that you made: "<<endl;
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	cout<<endl;	
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if (i<j){//      here we taking i<y because if we will take it then in some case value will reverse twice means same value will appear again
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}}
	}

	cout<<"Transpose matrix: "<<endl;
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}			
			cout<<endl<<"This program ends run again for options again"<<endl;
		cout<<"                  THANK  YOU                 ";			
				
				
			}
			
			
			else{	cout<<"you enter a wrong serial number";
		}
			
		}
		
		
		
		if(a==2){//       FOR ADDATION
			int x,y;
	cout<<"enter number of rows and clm of matrix 1: ";
	cin>>x>>y;
	int arr[x][y];
	cout<<"enter elements of matrix 1: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"numbers of rows and clm of arr and arr2 must be equal for matrix addation so "<<endl;
	int arr2[x][y];
	cout<<"enter elements of arr2: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr2[i][j];
		}
	}
	
	int arr3[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			arr3[i][j]=(arr[i][j]+arr2[i][j]);
		}
	}
	cout<<"matrix 1: "<<endl<<endl;
		for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl<<endl;
	}
	cout<<"matrix 2: "<<endl<<endl;
		for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr2[i][j]<<" ";
		}cout<<endl<<endl;
	}	
	cout<<"resultant matrix after addation: "<<endl<<endl;
		for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr3[i][j]<<" ";
		}cout<<endl<<endl;
	
}
		cout<<endl<<"This program ends run again for options again"<<endl;
		cout<<"                  THANK  YOU                 ";
}	
	
			
		
		if(a==3){//                 FOR SUBTRACTION
			int x,y;
	cout<<"enter number of rows and clm of matrix 1: ";
	cin>>x>>y;
	int arr[x][y];
	cout<<"enter elements of matrix 1: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"numbers of rows and clm of arr and arr2 must be equal for matrix addation so "<<endl;
	int arr2[x][y];
	cout<<"enter elements of arr2: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr2[i][j];
		}
	}
	
	int arr3[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			arr3[i][j]=(arr[i][j]-arr2[i][j]);
		}
	}
	cout<<"matrix 1: "<<endl<<endl;
		for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl<<endl;
	}
	cout<<"matrix 2: "<<endl<<endl;
		for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr2[i][j]<<" ";
		}cout<<endl<<endl;
	}	
	cout<<"resultant matrix after addation: "<<endl<<endl;
		for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr3[i][j]<<" ";
		}cout<<endl<<endl;
	
}		
		cout<<endl<<"This program ends run again for options again"<<endl;
		cout<<"                  THANK  YOU                 ";
		}
		
		
		
		
		
		if(a==4){//            FOR MULTIPLICATION
		int x,y,z;
	cout<<"enter number of rows and clmns of first matrix: ";
	cin>>x>>y;
	int arr[x][y];
	cout<<"enter number of clmns of second matrix: ";
	cin>>z;
	int arr1[y][z];
	cout<<"for your information number of clmns of first array will = number of rows of second array"<<endl;
cout<<"enter elements of first matrix:";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"enter elements of second matrix: ";
	for(int i=0;i<y;i++){
		for(int j=0;j<z;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<endl;
	int arr2[x][z];
	for(int i=0;i<x;i++){
		for(int j=0;j<z;j++){
			arr2[i][j]=0;
			for(int k=0;k<y;k++){
				arr2[i][j] += arr[i][k]*arr1[k][j];
			}
		}
	}
	cout<<endl<<"This is first matrix that you made: "<<endl;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	cout<<endl;
	cout<<endl<<"This is second matrix that you made: "<<endl;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}	
	cout<<endl<<endl;
	cout<<"this the the resultant matrix after multiplication of two matrix: "<<endl;
	for(int i=0;i<x;i++){
		for(int j=0;j<z;j++){
			cout<<arr2[i][j]<<" ";
		}cout<<endl;
	}		
		cout<<endl<<"This program ends run again for options again"<<endl;
		cout<<"                  THANK  YOU                 ";		
			
		}
		
		
		
		if(a==5){//                            FOR DIGONAL ELEMENTS PRINTING
			int x;
	cout<<"enter size of a square matrix: ";
	cin>>x;
	int arr[x][x];
	cout<<"enter elements: ";
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cin>>arr[i][j];
			
		}}
		cout<<"Original matrix that you made: "<<endl;

	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;}		
		cout<<"Matrix containing only digonals elements: "<<endl;
		for(int i=0;i<x;i++){
			for(int j=0;j<x;j++){
				if(i==j||i+j==(x-1)){
					cout<<arr[i][j]<<" ";
				}
				else cout<<" ";
			}
			cout<<endl<<endl;
		}	
		cout<<endl<<"This program ends run again for options again"<<endl;
		cout<<"                  THANK  YOU                 ";	
		}
		
		
		
		
		
		
		
	}
	else if(x=='n'||'N'){
		cout<<" Sorry, This program is only for matrix";
	}
	else {
		cout<<"Soory ,but this program is only for matrix OR you press wrong key";
	}
}
