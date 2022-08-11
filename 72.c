//ACCEPT N NUM and peform addition of that n numbers

#include<stdio.h>
#include<stdlib.h>
int SummationNumber(int Arr[], int iLength)
{
    int iSum=0;
    int iCnt=0;

for(iCnt=0;iCnt< iLength; iCnt++)
{
    iSum=iSum+Arr[iCnt];

}
return iSum;
}

int main()
{
int iCnt=0;
int iRet=0;
int*ptr=NULL;
int iSize=0;

printf("enter num of elements:");
scanf("%d", &iSize);

ptr= (int*)malloc(sizeof(int)*iSize);

printf("enter value:\n ");
for(iCnt=0; iCnt<iSize; iCnt++)
{
    scanf("%d", &ptr[iCnt]);
}
iRet= SummationNumber(ptr, iSize);
printf("Summation is: %d \n", iRet);

free(ptr);
return 0;

}