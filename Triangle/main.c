#include<stdio.h>

int main() {

    int nums[3];
    for (int i = 0, j = 'a'; i < 3; i++, j++)
    {
        printf(" Enter Side (%c): ", j);
        scanf_s("%d", &nums[i]);
    }


    if (nums[0] > nums[1] + nums[2] || nums[1] > nums[2] + nums[0] || nums[2] > nums[0] + nums[1])
        printf("\n Unvalid!");

    else
        printf("\n Accepted values\n The premiter is: %d", nums[0] + nums[1] + nums[2]);
}
