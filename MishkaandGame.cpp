#include <iostream>

using namespace std;

int main(){
	int n;
	int m,c;
	int countm=0,countc=0;
	cin >> n;
	while(n--){
		cin >> m >> c;
		if(m > c)countm++;
		else if(m < c)countc++;
	}
	if(countm > countc)cout << "Mishka" << endl;
	else if(countc > countm)cout << "Chris" << endl;
	else cout << "Friendship is magic!^^" << endl;
	return 0;
}
