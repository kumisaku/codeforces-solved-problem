#include<iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int count=0,max=0;
	while(a!=0 && b!=0){
		count++;
		b--;
		a--;
	}
	max = a/2;
	if(b/2 != 0)max = b/2;
	cout << count << ' '<< max << endl;
	
	return 0;
}
