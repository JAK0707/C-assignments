#include<stdio.h>
#include<math.h>

//Tower of Hanoi

void TowerofHanoi(int n,char s,char h,char d){
    if(n==0) return;
    TowerofHanoi(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    TowerofHanoi(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("TOWER OF HANOI\n");
    printf("Enter a number of disks: ");
    scanf("%d",&n);
    int minways = (pow(2,n))-1;
    printf("Minimum number of moves = %d\n",minways);
    TowerofHanoi(n,'A','B','C');
    return 0;
}