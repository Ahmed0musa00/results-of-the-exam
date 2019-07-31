#include <stdio.h>

int main(void)
{
    int i;
    int result;
    int passed=0;
    int failed=0;
    for(i=0;i<10;i++)
    {
    printf("Enter result of student no.%d (1=pass,2=failed) :",i+1);
    scanf("%d",&result);
    if(result==1)
        passed++;
    else if(result==2)
        failed++;
    else
    {
        printf("invalid input!!\n");
        i--;
    }
    }
    printf("\nTest result : \n");
    printf("the number of students who passed:%d\n",passed);
    printf("the number of students who failed:%d\n",failed);
    if(passed>8)
    printf("Bonus to instructor!\n");

    return 0;
}
