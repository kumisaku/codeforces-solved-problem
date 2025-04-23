#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n,i,j;
	long long int totalword, count = 0;
	cin >> n;
	while(n != 0){
		char word[1001];
		cin >> word;
		totalword = strlen(word);
		if(totalword > 10){
			for(i = 1; i < totalword-1;i++){
				count++;
			}
			cout << word[0] << count << word[totalword-1] << endl;
			count = 0;
		}
		else cout << word << endl;
		n--;
	}
	return 0;
}
