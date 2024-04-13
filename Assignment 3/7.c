/*A library charges a fine for every book returned late.For the first 
5 days the fine is 50 paisa, for 6-10 days fine is one rupee and 
above 10 days fine is 5 rupees. If you return the book after 30 days 
your membership will be canceled .WAP to accept no. of days the 
member is late to return the book and display the fine or appropriate 
message*/

#include<stdio.h>

int main(){
   int days;
   float fine=0;
   printf("No. of late late to return the book: ");
   scanf("%d",&days);
   if(days<=5){
    fine = fine + 0.50;
    printf("Your Fine is %.2f rupees",fine);
   }
   else if(days>=6 && days<=10){
    fine = fine + 1;
    printf("Your Fine is %.2f rupees",fine);
   }
   else if (days>10 && days<=30){
    fine = fine + 5;
    printf("Your Fine is %.2f rupees",fine);
   }
   else printf("Membership Cancelled");
   return 0; 
}
