#include <iostream>

using namespace std;

int main(){
	int t;
	int even = 0, odd = 0;
	int i,j;
	cin >> t;
	for(i = 0; i < t;i++){
		int n;
		cin >> n;
		for(j = 0;j < n*2; j++){
			int x;
			cin >> x;
			if(x%2==0)even++;
			else odd++;
		}
		if(even == odd)cout << "Yes" << endl;
		else cout << "No" << endl;
		even = 0, odd = 0;
	}
	return 0;
}
