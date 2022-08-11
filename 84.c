//input 5  display = 5 *  4 *  3  * 2 *  1*
//complexity O(N)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt= iNo; iCnt>=1; iCnt--)   //descending order 
    {
        printf("  %d \t *\t ", iCnt); //logic
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