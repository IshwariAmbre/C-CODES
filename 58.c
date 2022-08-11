//signed= neg and pos
//typedef  instead of using unsigned long int we use typedef and write ULONG
#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Power(int iNo1, int iNo2)
{

    ULONG  lMult=1;   //imp
    register int iCnt=0;   //

    for(iCnt=1; iCnt<=iNo2; iCnt++ )
    
    {
       lMult=lMult*iNo1; //base
    }

return lMult;
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto ULONG lRet=0;

    printf(" enter base:\n");
    scanf("%ld", &iValue1);

    printf("enter power: \n");
    scanf("%ld", &iValue2);

    lRet= Power(iValue1, iValue2); // power (3,4)

    printf("result i: %d\n", lRet);

    return 0;
}
