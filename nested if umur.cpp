#include <iostream>
using namespace std;

int main (){
	int umur;
	cout <<"Masukkan umur:";
	cin >> umur;
	
	if(umur <=10){
		cout <<"Starter kit:";
	}else{
		
		if(umur <=15){
			cout <<"basic gear:";
		}else if(umur <=20){
			cout <<"pro gear:";
		}else if(umur >=21){
			cout <<" expert gear:";	
		}else{
		}
	}
}
