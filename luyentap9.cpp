#include<stdio.h>
#include<math.h> 
int main(){
   int a, b, c;
   for(int i=100;i<1000;i++){
   a=i/100;
   b=(i/10)%10;
   c=i%10;
   if(i==pow(a,3)+pow(b,3)+pow(c,3)){
   	printf("day la so  Armstrong: %d\n",i);
   }	
   }
   return 0;
}
