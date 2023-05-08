#include<stdio.h>
int  count_before_zero(int ar[], int size){
    int count =0;
    for(int i=0; i<size; i++){
      if(ar[i]==0)      {

        break;
      }
      count++;
        }  
    return count;     
        }
int main(){
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
  }
  int result=count_before_zero(ar, n);
  printf("%d", result);

  return 0;
}
