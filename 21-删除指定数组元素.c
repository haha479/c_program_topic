#include<stdio.h>
#include<string.h>


int removenum(char *arr,int deletenum,int len){
	
	int i,j,n=len;
	for(i=0;i<len;i++){
		if(arr[i]==deletenum){
			n--; //ÿ�ҵ�һ���������ЧԪ�ؾ���һ 
			for(j=i;j<len;j++){
				arr[j]=arr[j+1]; //���� 
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








