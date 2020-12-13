#include<stdio.h>
/*求2/1,3/2,5/3,8/5,13/8,21/13这个数列的前20项和*/
/*每一项的分子为前一项的分子分母和,每一项的分母为前一项的分子*/

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
