#include<stdio.h>
#include<string.h>
/*��һ���ַ���������*/

int rechuan(char *n,int len){
	char *m=n+len-1,t;
	while(n<m){
		t = *n;
		*n=*m;
		*m=t;
		n++;
		m--;
	}
}
int main(){
	char arr[20]="abcdef";
	rechuan(arr,strlen(arr));
	puts(arr);
	return 0;
} 
