#include<stdio.h>
#include<string.h>


int removenum(char *arr,int deletenum,int len){
	
	int i,j,n=len;
	for(i=0;i<len;i++){
		if(arr[i]==deletenum){
			n--; //每找到一个数组的有效元素就少一 
			for(j=i;j<len;j++){
				arr[j]=arr[j+1]; //覆盖 
			}
		}
	}
	return n;
}

int removechar(char *arr,int deletenum,int len){
	
	int i,j,n=len;
	for(i=0;i<len;i++){
		if(arr[i]==deletenum){
			n--;
			for(j=i;j<len;j++){
				arr[j]=arr[j+1];
			}
		}
	}
	return n;
}
int main(){
	char arr[20],deletechar;
	gets(arr); 
	deletechar = getchar();
	removechar(arr,deletechar,5);
	puts(arr);
	return 0;
} 








