//accept n number and another num and find how many times another number is found in n number
// checkOccurence 
//array array size iNo
//eg 1,2,3,4,5,2,4,1,1,1 count 1

#include<stdio.h>
#include<stdlib.h>

int ChkOccurence(int Arr[], int iLength, int iNo)
{
    int iCnt=0;
    int iOccurence=0;

 for(iCnt=0;iCnt<iLength; iCnt++)

{
    if(iNo==Arr[iCnt])
    {
       iOccurence++;  //logic for max

    }
    
}
     return iOccurence;
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
printf("enter element for occuring:\n ");
scanf("%d", &iValue);

iRet= ChkOccurence(ptr, iSize, iValue);// func call
printf("Occurence is: %d \n", iRet);

free(ptr);
return 0;
}