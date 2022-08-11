// accept num nd one number and return first index of that number
// number ch index first

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccur(int Arr[], int iLength, int iNo)
{
    int iCnt=0;

 for(iCnt=0;iCnt<iLength; iCnt++)
{
    if(Arr[iCnt]==iNo)
    {
       
        break; 
    } 
}
if(iCnt==iLength)
{
    return -1;
}
else
{
    return iCnt;
}
}
int main()
{
    int iCnt=0;
    int iValue=0;
    int iRet=0;
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

iRet= SearchFirstOccur(ptr, iSize, iValue);// func 
if(iRet==-1)
{
  printf("element is not there \n");

}
else
{
     printf("element first occur here %d \n", iRet);
}

free(ptr);
return 0;
}          