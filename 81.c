//pattern printing 
//input 5  display = *****

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=0; iCnt<=iNo; iCnt++)
    {
        printf(" * \t ");
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