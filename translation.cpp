#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	string s;
	string t;
	cin >> s >> t;
	reverse(t.begin(),t.end());
	if(s.compare(t)==0)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
