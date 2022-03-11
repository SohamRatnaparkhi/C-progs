#include <stdio.h>
int binary_search(int num[], int s, int e, int target)
{
    while (e >= s)
    {
        int mid = s + ((e - s) / 2);
        if (num[mid] == target)
            return mid;
        else if (num[mid] > target)
        {
            // go left to check for target
            // e = mid - 1;
            return binary_search(num, s, mid - 1, target);
        }
        else if (num[mid] < target)
        {
            // go right
            //s = mid + 1;
            return binary_search(num, mid + 1, e, target);
        }
    }
    return -1;
}
int main()
{
    int l;
    printf("Enter number of elements - ");
    scanf("%d", &l);
    printf("Enter elements of SORTED array - ");
    int nums[l];
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target element - ");
    scanf("%d", &target);
    int index = binary_search(nums, 0, l - 1, target);
    if(index != -1) 
    printf("Index - %d", index);
    else
    printf("Element not found!");
}