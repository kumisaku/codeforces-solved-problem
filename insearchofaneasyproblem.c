#include<stdio.h>

int main(){
	int t,i,sum=0;
	scanf("%d", &t);
	int num[101];
	for(i=0;i<t;i++){
		scanf("%d", &num[i]);
	}
	for(i=0;i<t;i++){
		sum+=num[i];
	}
	if(sum!=0)printf("HARD\n");
	else printf("EASY\n");
	return 0;
}
