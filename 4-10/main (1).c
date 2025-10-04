#include<stdio.h>
#include<conio.h>
void main(){
    int age ;
    printf(" enter your age : ");
    scanf("%d",&age);
    
    if ( age >= 18 )
    {
        printf("\n eligeble for vote ");
        if (age >= 60)
        {
            printf("\n senior citizen ");
        }
        else 
        {
            printf("\n Yong age ");
        }
    }
    else{
        printf("\n Not eligeble");
    }
    getch();
}