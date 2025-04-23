#include<iostream>

using namespace std;

int main(){
	int num;
	cin >> num;
	do{
		num++;
	}while(num%4==0);
	
	cout << num << endl;
	return 0;
}
