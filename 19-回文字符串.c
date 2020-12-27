#include<stdio.h>
#include<string.h>
/*输入一个字符串，判断是否是回文字符串*/ 
int huiwenchuan(char *n, int len){
	char *m=n+len-1;
	while(n<m){
		if(*n!=*m){
			return 0;
		}
		n++;
		m--;
	}
	return 1;
}
int main(){
	char arr[100];
	gets(arr);
	if(huiwenchuan(arr,strlen(arr))){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
