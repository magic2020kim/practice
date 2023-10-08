/**
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * Example 1:
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 
 * Example 2:
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 
 * Example 3:
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *array = malloc(2 * sizeof(int));

    for(int i=0; i<numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                array[0] = i;
                array [1] = j;
                return array;
            }
        }
    }
    return NULL;
}

int main(){
    int i;
    int nums[] = {1,2,3,4,5,6};
    int rsize[] = {4};
    int *output = twoSum(nums,6,6,rsize); //only return one result, not as expected return 2 [1 + 5] & [2 + 4]
    printf("%d & %d \n", output[0], output[1]);
    free(output);
    return 0;
}