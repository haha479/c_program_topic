#include<stdio.h>
/*��3������5������6������������ȡ��8�������б����к���,������п��ܵķ���*/ 



int main(){
	int red,white,black,n=0;
	for(red=0;red<=3;red++){
		for(white=0;white<=5;white++){
			for(black=1;black<=6;black++){
				if(black+red+white==8){
					n++;
					printf("red=%d.white=%d.black=%d\n",red,white,black);	
				}
			}
		}
	}
}
