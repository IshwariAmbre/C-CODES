//input 5
// display = 1*3*5
        //counter 123456
//input 6 display 1*2*3*
//complexity N with single loop

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    
for( iCnt= 1; iCnt<=iNo; iCnt++ )  //iNo la minus karycha so negative to positive 
    
     {
         if(iCnt%2==0)
         { 
            printf(" *\t ", iCnt); //logic
         }
       else
         {
        printf("%d \t", iCnt);
         }
     }
}
int main()
{
int iValue=0;
printf("please enter value:\n ");
scanf("%d", &iValue);

Display(iValue); 

return 0;
}  