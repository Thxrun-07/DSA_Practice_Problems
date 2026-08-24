#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int index = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            int temp = nums[index];
            nums[index] = nums[i];
            nums[i] = temp;
            index++;
        }
    }
}
5
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    moveZeroes(nums, n);
    printf("Array after moving zeroes: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}