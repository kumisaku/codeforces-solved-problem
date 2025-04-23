#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int p;
		cin >> p;
		char x[p+1];
		cin >> x;
		if(strcmp(x,"Timur")==0 || strcmp(x,"miurT")==0 || strcmp(x,"Trumi")==0 || strcmp(x,"mriTu")==0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
