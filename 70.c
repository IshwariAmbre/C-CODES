//accept n num from user and count of even numbers
//DisplayEven

#include<stdio.h>
#include<stdlib.h>        //for malloc and free

void DisplayEven(int Arr[], int iLength)
{
      int iCnt=0;
      for(iCnt=0; iCnt<iLength; iCnt++)
      {
          if((Arr[iCnt]%2)==0)
          {
              printf("%d\n", Arr[iCnt]);
          }
         
      }
      
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int *ptr= NULL;

    printf("enter num of elements: \n");
    scanf("%d", &iSize);

   ptr=(int*) malloc(iSize*sizeof(int));   //typecast void to int

   printf(" enter value of array: \n");
   for(iCnt=0; iCnt<iSize;iCnt++)
   {
       scanf("%d", &ptr [iCnt]);
   }
   DisplayEven(ptr, iSize);
   free(ptr);

    return 0;
}    

//1-accept size of array from user  2-alocate memory dynamically
//3-accept value from user n store in array
//4- pass array n size to function logic 5- deallocate memory