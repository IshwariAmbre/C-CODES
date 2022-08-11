//input 4
// display = -4     -3  -2  -1  0   1   2   3   4
//complexity O(2N) with single loop
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    
for( iCnt= -iNo; iCnt<=iNo; iCnt++ )  //iNo la minus karycha so negative to positive 

    {
        printf("  %d \t ", iCnt); //logic
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