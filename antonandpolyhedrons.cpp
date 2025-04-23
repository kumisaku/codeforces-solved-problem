#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >>t;
	int sum=0;
	while(t--){
		char s[101];
		cin >> s;
		if(strcmp(s,"Tetrahedron")==0)sum+=4;
		else if(strcmp(s,"Cube")==0)sum+=6;
		else if(strcmp(s,"Octahedron")==0)sum+=8;
		else if(strcmp(s,"Dodecahedron")==0)sum+=12;
		else sum+=20;
		
	}
	cout << sum << endl;
	return 0;
}
