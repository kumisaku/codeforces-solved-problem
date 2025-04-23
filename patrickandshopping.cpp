#include<iostream>

using namespace std;

int main(){
	int d1,d2,d3;
	cin >> d1 >> d2 >> d3;
	int option1 = d1*2 + d2*2;
	int option2 = d2*2 + d3*2;
	int option3 = d1*2 + d3*2;
	int option4 = d1+d2+d3;
	if(option1 < option2 && option1 < option3 && option1 < option4){
		cout << option1 << endl;
	}else if(option2 < option1 && option2 < option3 && option2 < option4){
		cout << option2 << endl;
	}else if(option3 < option1 && option3 < option2 && option3 < option4){
		cout << option3 << endl;
	}else if(option4 < option1 && option4 < option2 && option4 < option3){
		cout << option4 << endl;
	}else{
		cout << d1+d2+d3 <<endl;
	}
	return 0;
}
