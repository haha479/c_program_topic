#include<stdio.h>
/*从3个红球，5个白球，6个黑球中任意取出8个球，其中必须有黑球,输出所有可能的方案*/ 



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
