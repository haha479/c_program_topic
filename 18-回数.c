#include<stdio.h>
/*����һ�������ж��Ƿ��ǻ���*/

//int getNum(int num){
//	int sum=0;
//	while(num>0){
//		sum=sum*10+num%10;
//		num/=10;
//	}
//	return sum;
//}
//int main(){
//	int num;
//	scanf("%d",&num);
//	if(num==getNum(num)){
//		printf("�����ǻ���");
//	}
//	else{
//		printf("�������ǻ���");	
//	}
//	return 0;
//	
//}


/*ʵ��1-1000�ڵĻ�����ӡ*/ 

int huiwenshu(int num){
	int sum=0;
	while(num>0){
		sum=sum*10+num%10;
		num/=10;
	}
	return sum;
}
int main(){
	int num;
	for(num=1;num<=1000;num++){
		if(num==huiwenshu(num)){
			printf("%d\t",num);
		}
	}
	return 0;
} 



