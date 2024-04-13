//Solve the game of Tower of Hanoi using recursion. Rules of this game are (i) move one disk at a time (ii) a bigger disk have to be always below. 

#include<stdio.h>
#include<math.h>

void TowerofHanoi(int n,char s,char h,char d){
    if(n==0) return;
    TowerofHanoi(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    TowerofHanoi(n-1,h,s,d);
    return;
}

int main(){
    int n;
    printf("TOWER OF HANOI\n");
    printf("Enter number of disks: ");
    scanf("%d",&n);
    int no_of_ways = (pow(2,n))-1;
    printf("Minimum no. of moves = %d\n",no_of_ways);
    TowerofHanoi(n,'A','B','C');
    return 0;
}