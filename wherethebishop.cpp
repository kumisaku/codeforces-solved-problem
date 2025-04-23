#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int isFound=0;
	int r,c;
	while(t--){
		char s[101][101];
		int i,j;
		for(i=1;i<=8;i++){
			for(j=1;j<=8;j++){
				cin >> s[i][j];
				if(s[i][j] == '#')isFound++;
				r=i;
				c=j;
			}
			if(isFound != 1)isFound = 0;
			else if(isFound == 1)cout << c << r << endl;
			s[i][j] = 0;
		}
	}
	return 0;
}
