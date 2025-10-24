#include<iostream>
using namespace std;
int main(){
	int number=7;
	for(int i=2;i<number-1;i++){
		if(number%i==0){
			cout<<"Number"<<number<<"is non Prime.";
			return 0;
		}
	}
	cout<<"Number"<<number<<"is Prime"; 
	return 0;
}
