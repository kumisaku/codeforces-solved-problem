#include <iostream>

using namespace std;

int main(){
	int m,n;
	cin >> n >> m;
	int i,j;
	int count=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i == 1 || i == n || i%2!=0)cout << "#";
			else if(i%2==0 && count!=2 ||  j==m  )cout << "#";
			else cout << ".";
			count++;
			
		}
		cout << "\n";
	}
	return 0;
}
