#include<stdio.h>
void no_return_has_parameter(int n){
    if(n<0){
        int result= n*(-1);
        printf("%d", result);
    }
    else{
        printf("%d",n);
    }

}
int main(){
    int a;
    scanf("%d",&a);
    no_return_has_parameter(a);
          
  return 0;
}
