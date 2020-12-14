#include <stdio.h>
/* 
	made by hyomin
   
*/ 
int twoConvertTen(int num);
int main(){
	
	int x; //입력 
	int a,b,c,d; //서브넷 마스크 a.b.c.d 
	int binary=1;
	int i = 0;
	int ten;
	a=0;
	b=0;
	c=0;
	d=0;
	
	scanf("%d", &x);
	
	if(x>=8){//x가 8일시 11111111.0.0.0 이므로 255.0.0.0, 1<=x<8이라면 else문으로 들어감.   
		a = 255;
		if(x>=16){//x가 16일시 11111111.11111111.0.0 이므로 255.255.0.0, 8<x<16이라면 else문으로 들어감.
			b=255;
			if(x>=24){//x가 24일시 11111111.11111111.11111111.0 이므로 255.255.255.0, 16<x<24이라면 else문으로 들어감.
				c=255;
				if(x>=32){//x가 32일시 11111111.11111111.11111111.11111111 이므로 255.255.255.255, 24<x<32이라면 else문으로 들어감.
					d=255;
				}
				else if(x != 24){
					x = x-24;
					for(i=1;i<x;i++){
						binary = binary*10+1;
					}
					for(i=0;i<8-x;i++){
						binary = binary *10;
					}
					ten = twoConvertTen(binary);
					d = ten;
					binary = 1;
				}			
			}
			else if(x != 16){
				x = x-16;
				for(i=1;i<x;i++){
					binary = binary*10+1;
				}
				for(i=0;i<8-x;i++){
					binary = binary *10;
				}
				ten = twoConvertTen(binary);
				c = ten;
				binary = 1;
			}
			
		}
		else if(x != 8){
			x = x-8;
			for(i=1;i<x;i++){
				binary = binary*10+1;
			}
			for(i=0;i<8-x;i++){
				binary = binary *10;
			}
			ten = twoConvertTen(binary);
			b = ten;
			binary = 1;
			}
	}
	else{// 바이너리 -> 십진수 
		for(i=1;i<x;i++){
			binary = binary*10+1; // 이 계산을 해주면 만약 x가 7이면 1111111이 됌. 
		}
		for(i=0;i<8-x;i++){
			binary = binary *10; // 이 계산을 해주면  만약 x가 7이면 11111110이 됌. 
		}
		ten = twoConvertTen(binary); // 십진수 변환 함수 호출. 
		a = ten;
		binary = 1;	//변수 값 초기화 
	}
	
	printf("%d.%d.%d.%d", a, b,c,d);//최종 출 력 
	return 0;
} 

int twoConvertTen(int num){//2진수 -> 10진수 변환 함수. 
	
	int result = 0;
	int mul = 1;
	while(num>0){
		if(num%2){
			result += mul;
		}
		mul *= 2;
		num /=10;
	}
	return result;
}
