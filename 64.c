//diff function void display
//pointer at line 6
//array with loops
//with for loop
#include<stdio.h>
void DisplayArray(int *ptr )
{
      int iCnt=0;
      
     printf("Elements of array are: \n");
    
    for(iCnt=0; iCnt<5; iCnt++)
    {
        printf("%d\n", *ptr);
        ptr++;     //pointer arithmentic
    }

}
int main()
{
       auto int Arr[5];      
     register int iCnt=0;  //scope starts

    printf("enter elements\n");

    for(iCnt=0; iCnt<5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }
   
DisplayArray(Arr);   //display(100);
    

    return 0;
}