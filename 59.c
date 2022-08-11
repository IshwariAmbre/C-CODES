#include"header59.h"

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
