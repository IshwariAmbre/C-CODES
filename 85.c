//input 4
// display = 1  2   3   4   4   3   2   1 
//complexity O(2N)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt= 1; iCnt<=iNo; iCnt++)   //ascending order 
    {
        printf("  %d \t ", iCnt); //logic
    }

    for(iCnt= iNo; iCnt>=1; iCnt--)   //descending order 
    {
        printf("  %d \t ", iCnt); //logic
    }
   
}
int main()
{
int iValue=0;
printf("please enter value:\n ");
scanf("%d", &iValue);

Display(iValue);  //display(5)

return 0;
}  