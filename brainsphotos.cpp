#include<iostream>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	char a[n+1][m+1];
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	int iscolor=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')iscolor++;
		}
	}
	if(iscolor!=0)cout << "#Color" << endl;
	else cout << "#Black&White" << endl;
	return 0;
}
