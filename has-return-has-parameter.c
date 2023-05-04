#include<stdio.h>
int Has_return_No_parameter(){
    int a, b;
    scanf("%d %d", &a,&b);
    int sum=a%b;
    return sum;
}
int main(){
  
  int result = Has_return_No_parameter();
  printf("%d",result);
  

  return 0;
}
