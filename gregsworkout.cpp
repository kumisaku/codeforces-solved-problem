#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int i;
	int a[t];
	int biceps=0;
	int back=0;
	int chest=0;
	for(i=1;i<=t;i++){
		cin >> a[i];
	}
	for(i=1;i<=t;i+=3){
		chest+=a[i];
	}
	for(i=2;i<=t;i+=3){
		biceps+=a[i];
	}
	for(i=3;i<=t;i+=3){
		back += a[i];
	}
	if(chest > biceps && chest > back)cout << "chest" << endl;
	else if(biceps > chest && biceps > back )cout << "biceps" << endl;
	else cout <<"back" << endl;
	return 0;
}
