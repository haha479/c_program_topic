#include<stdio.h>
/*����:һ����������֮�͸պõ��������,���� 6=1+2+3. 1,2,3��Ϊ6������*/


int main(){
	
	
	int sum=0,i,j;
	for(i=1;i<=100;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			printf("%d\t",i);
		}
	}
	return 0;
}
