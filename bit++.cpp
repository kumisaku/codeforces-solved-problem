#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int x = 0;
	int t;
	cin >> t;
	while(t--){
		char b[101];
		cin >> b;
		if(strcmp(b, "++X")==0 || strcmp(b,"X++")==0){
			x+=1;
		}
		if(strcmp(b, "--X")==0 || strcmp(b,"X--")==0){
			x-=1;
		}
	}
	cout << x << endl;
	
	
	return 0;
}
