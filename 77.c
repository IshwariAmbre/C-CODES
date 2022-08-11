//accept n number and search one number
// checkNumber 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt=0;
    bool bFlag=false;  //its down if false nd no num found

 for(iCnt=0;iCnt<iLength; iCnt++)
{
    if(Arr[iCnt]==iNo)
    {
       bFlag=true;
       break; //logic for searching with flag
    } 
}
     return bFlag;
}
int main()
{
    int iCnt=0;
    int iValue=0;
    bool bRet=0;
    int*ptr=NULL;    //pointer set to null
    int iSize=0;  

printf("enter num of elements:");
scanf("%d", &iSize);

ptr = (int*)malloc(sizeof(int)*iSize);

printf("enter value:\n ");

for(iCnt=0; iCnt< iSize; iCnt++)
{
    scanf("%d", &ptr[iCnt]);
}
printf("enter element for searching:\n ");
scanf("%d", &iValue);

bRet= Search(ptr, iSize, iValue);// func 
if(bRet==true)
{
  printf("element is there \n");

}
else
{
     printf("element is not there \n");
}

free(ptr);
return 0;
}