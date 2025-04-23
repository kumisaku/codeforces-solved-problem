#include<stdio.h>
#include<string.h>


int main(){
	int n,i,j;
	int totalword,count = 0;
	scanf("%d", &n);
	while(n != 0){
		char word[101];
		scanf("%s", word);
		totalword = strlen(word);
		if(totalword > 4){
			for(i = 1; i < totalword - 1; i++){
				count++;
			}
			printf("%c%d%c\n", word[0],count,word[totalword-1]);
			count = 0;
		}
		else printf("%s\n", word);
		n--;
	}
	return 0;
}
