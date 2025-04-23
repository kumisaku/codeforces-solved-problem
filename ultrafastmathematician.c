#include<stdio.h>
#include<string.h>

int main(){
	char s1[1001];
	char s2[1001];
	scanf("%s",s1);
	scanf("%s",s2);
	int i;
	for(i=0;i<strlen(s1);i++){
		if(s1[i]==s2[i]){
			printf("0");
		}
		else printf("1");
	}
	return 0;
}
