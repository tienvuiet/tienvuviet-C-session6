#include<stdio.h>
int main(){
	for(int i=1;i<=100;i++){
		if(i%5==0&&i%3==0){
			printf("FizzBuzz\n %d",i);
		}
		else if(i%3==0){
			printf("Fizz\n %d",i);
		}else if(i%5==0){
			printf("Buzz\n %d", i);
		}
	}
	return 0;
}
