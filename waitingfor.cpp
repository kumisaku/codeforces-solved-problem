#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int sum=0;
		char pb[11], num, temp=0;
		cin >> pb >> num;
		if(strcmp(pb, "B")==0){
			sum-=num;
			temp = num;
		}else{
			temp =0;
			sum += num;
		}
		if(sum < temp)cout <<"YES" << endl;
		else cout << "NO" << endl;
		sum = 0;
		temp =0;
	}
	return 0;
}
