#include<stdio.h>
int main(){
    char x;
    printf("Enter: ");
    scanf("%c",&x);
    if (x>='a' && x<='z'){
        printf("Small Letter");
    }
    else if (x>='A' && x<='Z'){
        printf("Capital Letter");    
    }
    else if (x>='0' && x<='9'){
        printf("Digit");  //how to check for a two digit number
    }
    else printf("Special Character");  
    return 0;
}