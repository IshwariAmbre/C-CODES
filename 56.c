//output should be a raise to b
// 2 raise to three should be 8
//problems on numbers  2   4 = 16
//power
//accept num a and b and give result a raise to b
#include<stdio.h>
long int Power(int iNo1, int iNo2)
{

    long int  lMult=1;   //imp
    register int iCnt=0;
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
    auto long int lRet=0;

    printf(" enter base:\n");
    scanf("%ld", &iValue1);

    printf("enter power: \n");
    scanf("%ld", &iValue2);

    lRet= Power(iValue1, iValue2); // power (3,4)

    printf("result i: %d\n", lRet);

    return 0;
}
