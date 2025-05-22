#include<stdio.h>
void fibbo(int n){
int a=0,b=1,temp;
  for(int i=0;i<n;i++){
    temp=a+b;
    printf("%d\n",temp);
    a=b;
    b=temp;
  }
  printf("\n");
}

int main(){
    fibbo(4);
     return 0;
}
   
   