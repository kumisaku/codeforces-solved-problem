#include<bits/stdc++.h>

using namespace std;

int main(){
	int t=5;
	int s[t+1][t+1];
	int count = 0;
	int x,y;
	for(int i = 1; i<= t ;i++){
		for(int j =1 ; j <= t;j++){
			cin >> s[i][j];
			if(s[i][j] == 1){
				x = i;
				y = j;	
			}
		}
	}
	int distance = abs(x-3) + abs(y-3);
	cout << distance << endl;
	return 0;
}
