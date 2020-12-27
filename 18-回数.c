#include<stdio.h>
/*输入一个数，判断是否是回数*/

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
//		printf("该数是回数");
//	}
//	else{
//		printf("该数不是回数");	
//	}
//	return 0;
//	
//}


/*实现1-1000内的回数打印*/ 

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



