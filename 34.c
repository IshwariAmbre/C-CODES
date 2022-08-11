//check whether number is perfect or no
//function return value should be boolean 
//sumission of factors is equal to perfect number

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{

    int iCnt=0;
    int iSum=0;
    if(iNo<0)
        {
            iNo=-iNo;
        }
        for(iCnt=1; ((iCnt<=(iNo/2)&&(iSum<=iNo)); iCnt++)  //addition of factor
        {
           if((iNo%iCnt)==0)
             {
                  iSum=iSum+iCnt
          
             }
    
  }
      if(iSum==iNo)
      {
          return true;
      }
      else
      {
           return false;
      }

}
int main()
{
    int iValue=0;
    bool bRet;

    printf("enter number\n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {

        printf("%d is perfect num\n :, iValue");
    }
    else
    {
        printf("%d is not perfect num\n", iValue);
    }

    return 0;
}