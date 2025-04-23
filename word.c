#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s[101];
	int i;
	scanf("%s", s);
	int countupper=0,countlower=0;
	int totalword = strlen(s);
	for(i=0;i<totalword;i++){
		if(isupper(s[i]))countupper++;
		else if(islower(s[i]))countlower++;
	}
	for(i=0;i<totalword;i++){
		if(countupper==countlower)printf("%c",tolower(s[i]));
		else if(countupper > countlower)printf("%c",toupper(s[i]));
		else printf("%c",tolower(s[i]));
	}
	return 0;
}
