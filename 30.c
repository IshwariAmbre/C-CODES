//accept no. from user and show factor
//input:10
//output: 1  2   5                  1-init  2-condition 3- displacment 4-loop
//input 17 output 1
//input -20  output 1
//factors are not negative
#include<stdio.h>
void DisplayNonFactors(int iNo)//dukan variable deto
{
    int iCnt=0;
       if(iNo<0)
       {
           iNo= -No
       }
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n, iCnt");
        }
    }


}
int main()
{
    int iValue=0;
    printf("enter num:\n");
    scanf("%d,&iValue");

    DisplayFactors(iValue);

    return 0;
    //time complexity O(N/2)
}




/*
input:10                          starting point is always 1
iNo=10                               
if((iNo%1)==0)  means 1 is factor of                 
{}
if((iNo%7)==0)  means 7 is factor of 10    ending is always number-1
{}
*/