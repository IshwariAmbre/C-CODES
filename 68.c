//ptr replaced with array arr
//best practice
#include<stdio.h>
void DisplayArray(int Arr[] )
{
      int iCnt=0;
      
     printf("Elements of array are: \n");
    
    for(iCnt=0; iCnt<5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
            //pointer arithmentic
    }

}
int main()
{
       auto int Brr[5];      
     register int iCnt=0;  //scope starts

    printf("enter elements\n");

    for(iCnt=0; iCnt<5; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
   
DisplayArray(Brr);   //display(100);
    return 0;
}




// Arr[2];
//internally *(Arr+2);
//*(2+Arr);
//[2]