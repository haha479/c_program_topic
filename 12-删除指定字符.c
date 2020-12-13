#include<stdio.h>
#include<string.h>

int main(){
	
	char charr[20] = "hello",s2[20] = "\0";
	int i,j;
	char del='l';
	
	for(i=0,j=0;i<strlen(charr);i++){
		if(charr[i]!=del){
			s2[j++] = charr[i];
		}
	}
	printf("É¾³ýºó:\n");
	printf("%s",s2)	;
	
	
	
	
	
	return 0;
}
