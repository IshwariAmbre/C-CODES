#include<stdio.h>
#include<stdbool.h>
void DisplayF(int iNo)        //forward display
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
 void DisplayB(int iNo)       //backward display
{
    int iCnt=0;
    for(iCnt=1;iCnt>=iNo; iCnt--)
    {
        printf("%d\n", iCnt);
    }
}


int main()
{
    int iValue=0;

    printf("enter num\n");
    scanf("%d, &iValue");
    printf("forward display\n");
    DisplayF(iValue);
    printf("backward display\n");
    DisplayB(iValue);
}