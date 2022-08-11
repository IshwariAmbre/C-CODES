//accept num from user and count freq of digits
//less than 6

#include<stdio.h>
int Count(iNo)
{
 int iCnt=0;
 int idigit=0;
 if(iNo<0)
 {
     iNo=-iNo;

 }
   while(iNo>0)
   {
       idigit=iNo%10;
       if(idigit<6)
       {
           iCnt=iCnt+1;
       }
       iNo=iNo/10;
   }
 return iCnt;


}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number: ");
    scanf("%d", &iValue);

    iRet= Count(iValue);

    printf("%d", iRet);
    return 0;
}