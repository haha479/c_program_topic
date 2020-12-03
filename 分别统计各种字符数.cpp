#include<stdio.h>
#include<string.h>

int main(){
	char Array[100];
	int i,length,eng=0,num=0,space=0,other=0;
	gets(Array);
	length = strlen(Array);
	for(i=0;i<length;i++){
		if(Array[i]>='A' && Array[i]<='Z' || Array[i]>='a' && Array[i]<='z'){
			eng+=1;
		}
		else if(Array[i]>='1' && Array[i]<='9'){
			num+=1;
		}
		else if(Array[i]==' '){
			space+=1;
		}
		else{
			other+=1;
		}
	}
	printf("字母:%d,数:%d,空格:%d,其他:%d",eng,num,space,other);
	return 0;
}
