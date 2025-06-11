#include <stdio.h>

void productExceptSelf(int* nums, int numsSize) {
    int output[numsSize];

    // Calculate prefix products
    output[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        output[i] = nums[i - 1] * output[i - 1];
    }

    // Calculate suffix products and multiply with prefix products
    int suffixProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        output[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }

    // Print output
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", output[i]);
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    productExceptSelf(nums, numsSize);
    return 0;
}

