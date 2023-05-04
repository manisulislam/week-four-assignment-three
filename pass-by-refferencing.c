#include<stdio.h>
void pass_by_referencing(int*p){
    *p=230;

}
int main(){
  int a=40;
  pass_by_referencing(&a);
  printf("main function a value is- %d\n", a)        ;
  return 0;
}
