//Author:walter
//Date:13/06/2024
//Descripction:calculating ebills
//Reg no:BBIT-05-0124/2016
#include<stdio.h>
int main()
{
    char customerName[20];
    int customerID;
    float unitconsumed, bill;
    printf("Please enter name:");
    scanf("%c",customerName);
    
    printf("Enter ID:");
    scanf("%d",&customerID);
    
    printf("Please enter unit consumed,bill");
    scanf("%f%f",&unitconsumed, bill);
    if(unitconsumed 0>=100 && unitconsumed<=199){
        bill=unitconsumed*1.20;
        
    }q
    else if(unitconsumed 199>=200 && unitcondume 399<400){
        bill =unitconsumed*1.50
        
    }
    else if(unitconsumed 399>=400 && unitconsumed 599<600){
        bill =unitconsumed*1.8;
    }
     else if(unitconsumed 599>=600){
         bill =unitconsumed*2.00;
         
     }
     if(Bill 399>400){
         bill = bill+(bill*0.15);
         
     }
     if(bill>100){
         printf("The bill is %.2f",bill);
         
     }
    return 01
}
