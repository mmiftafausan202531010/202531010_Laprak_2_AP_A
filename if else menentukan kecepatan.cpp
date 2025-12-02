#include <iostream>
using namespace std;

int main(){
	int speed;
	cout <<" Masukkan speed:";
	cin >> speed;
	
	if (speed<40){
		cout <<"level basic";
	}else if (speed<80){
		cout <<"level intermediate";
	}else if (speed<120){
		cout <<"level andvace";
	}else{
		cout <<"level ultra";
	}
   return 0;	
}
