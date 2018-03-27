#include <stdio.h>
 
int main (void) {
     int i;
     printf("enter  value i:");
     scanf("%d",&i);
     if(i%4==0){
     	printf("leap year");
     }
     else{
     	printf("it is not leap year");
     }
  return 0;
}
