#include<iostream>
using namespace std;
int main(){
	int n,digit;
	int sum=0;
	cout<<" enter the number : ";
	cin>>n;
	while(n !=0){
	digit = n%10;
	sum+=digit;
	n/=10;
	
	}
	cout<<" sum of the number :"<<sum<<endl;
	
}