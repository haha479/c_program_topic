#include<stdio.h>
#include<string.h>
/*����һ���ַ������ж��Ƿ��ǻ����ַ���*/ 
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
