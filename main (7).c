#include<stdio.h>
#include<conio.h>
int main()
{
    int price = 20000,years = 3;
    float rateofi = 5.6;

    float intrest = price*rateofi*years/100; // float is data type & intrest is veriable 
  
    printf("\n intrest = %f ", intrest);
    
     float total = intrest+price; // float is data type & total is veriable 
     
     printf("\n \t total price = %f ", total);
     
     
	getch();
}
