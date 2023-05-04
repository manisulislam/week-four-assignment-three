#include<stdio.h>
void pass_by_value(int a){
    a=100;
    printf("pass_by_value function a value is-%d\n", a);
}
int main(){
  int a=40;
  pass_by_value(a);
  printf("main function a value is-%d",a) ;
  return 0;
}
