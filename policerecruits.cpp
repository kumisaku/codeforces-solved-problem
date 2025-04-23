#include<iostream>

using namespace std;

int main(){
	int n,x;
	cin >> n;
	int police=0;
	int crime=0;
	while(n--){
		cin >> x;
		if(x < 0){
			if(police < 0){
				police -= x;
			}else{
				crime++;
			}
		}else{
			police++;
		}
	}
	cout << crime << endl;
	return 0;
}
