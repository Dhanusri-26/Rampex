#include<stdio.h>
int great(a,b,c){
    if(a>=b&&a>=c){
        return 0;
    }
else if(a>=c){
    return 0;
}    
}
int main(){
    printf("%d",great(3,5,10));
    return 0;
}
