#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char n[1001];
	scanf("%s", n);
	int i, count=0;
	for(i=0;i<strlen(n);i++){
		if(n[i]=='4'||n[i]=='7')count++;
	}
	if(count==4 || count==7)printf("YES\n");
	else printf("NO\n");
	return 0;
}
