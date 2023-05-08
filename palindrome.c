#include<stdio.h>
#include<string.h>
int  is_palindrome(char ar[]){
    int flag=1;
    int lowest=0;
    int highest=strlen(ar)-1;
    while(highest>lowest){
        if(ar[lowest++]!=ar[highest--]){
            flag=0;
        }
        
    }
    return flag;



}
int main(){
  char ar[10];
  scanf("%s", ar);
  int result=is_palindrome(ar);
  if(result==0){
    printf("Not Palindrome\n");

  }
  else if(result==1){
    printf("Palindrome\n");
  }
  


  return 0;
}
