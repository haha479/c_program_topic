#include<stdio.h>
/*��2/1,3/2,5/3,8/5,13/8,21/13������е�ǰ20���*/
/*ÿһ��ķ���Ϊǰһ��ķ��ӷ�ĸ��,ÿһ��ķ�ĸΪǰһ��ķ���*/

int main(){
	int n=0,temp;
	float fz=2,sum=0,fm=1;
	
	for(n=1;n<=20;n++){
		
		sum = sum+fz/fm;
		temp = fz;
		fz = fz+fm;
		fm = temp;		
	}
	
	printf("%f",sum);	
	
	
	return 0;
}
