// problems on digits

#include<stdio.h>   // while loop

//input : 7875
//output :  5  7  8 9 ulta display hotat

void DisplayDigits( int iNo)
{
   int iDigit=0;
   if(iNo<0)
   {
       iNo= -iNo;
   }

   while(iNo!=0)
   {
       iDigit= iNo % 10;
       printf("%d\n", iDigit);
       iNo= iNo/10;
   }
}

int main()
{
    int iValue=0;

    printf("enter num\n");
    scanf("%d, &iValue");       // &address ie value

    DisplayDigits(iValue);

    return 0;
}