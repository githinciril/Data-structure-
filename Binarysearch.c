#include <stdio.h>
void main()
{
    int lt, i, temp, count = 0;
    count++;
    printf("enter the limit of the array:");
    scanf("%d", &lt);
    count++;
    int Arr[lt];
    printf("enter the elements :");
    for (i = 0; i < lt; i++)
    {
        count++;
        scanf("%d", &Arr[i]);
        count++;
    }
    /*count++;*/
    for (i = 0; i < lt; i++)
    {
        count++;
        for (int j = i + 1; j < lt; j++)
        {
            count++;
            if (Arr[i] > Arr[j])
            {
                count++;
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
                count += 3;
            }
            /*count++;*/
        }
        /*count++;*/
    }
    /*count++;*/
    printf("the sorted array :");

    for (i = 0; i < lt; i++)
    {
        count++;
        printf("%d ", Arr[i]);
        count++;
    }
    /*count++;*/
    printf("\n");
    int num, left = 0, right = lt - 1, middle = (left + right) / 2;
    count++;
    count++;
    count++;
    printf("enter the element to be searched :");
    scanf("%d", &num);
    count++;
    int flag = 0, pos;
    count++;
    count++;

    if (num < Arr[middle])
    {
        count++;
        right = middle - 1;
        count++;
        for (i = 0; i <= right; i++)
        {
            count++;
            if (num == Arr[i])
            {
                count++;
                pos = i;
                flag = 1;
                count++;
                count++;
                break;
            }
            /*count++;*/
        }
        /*count++;*/
    }
    /*count++;*/
    if (num == Arr[middle])
    {
        count++;
        middle = pos;
        flag = 1;
        count++;
        count++;
    }
    /*count++;*/

    if (num > Arr[middle])
    {
        count++;
        left = middle + 1;
        count++;
        for (i = left; i <= right; i++)
        {
            count++;
            if (num == Arr[i])
            {
                count++;
                pos = i;
                flag = 1;
                count++;
                count++;
                break;
            }
            /*count++;*/
        }
        /*count++;*/
    }
    /*count++;*/

    if (flag == 0)
    {
        count++;
        printf("the element is not found in the given array\n");
    }
     /*count++;*/

    if(flag==1)
    {
        count++;
        printf("the element is found at position %d\n", pos);
    }
    /*count++;*/

    count++;
    count++;
    printf("time complexity of the program is :%d\n", count);
    printf("space complexity of the program is :%d\n", 11 * 4 + (lt * 4));
}
