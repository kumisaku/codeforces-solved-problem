#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int a[n+1];
		int count = 0;
		int tempCt = 0;
		
		for(int i = 0; i < n;i++){
			cin >> a[i];
			if(a[i] == 0){
				count++;
			}
			else{
				if(tempCt < count)tempCt = count;
				count = 0;	
			}
		}
		
		cout << tempCt << endl;
	}
}
