/**
 * Note: The returned array must be malloced, assume caller calls free().
  */
  int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
      int i, j;
          int min = target - nums[0], max = target - nums[0];
              int *result = malloc(2 * sizeof(int));

                  // find minimum and maximum numbers that can be used to get target value
                      for (i = 0; i < numsSize; i++) {
                              int x = target - nums[i];
                                      if (x < min)
                                                  min = x;
                                                          if (x > max)
                                                                      max = x;
                                                                          }

                                                                              for (i = 0; i < numsSize - 1; i++) {
                                                                                      // skip numbers that are too small or too big to use - this could give a huge performance boost
                                                                                              if (nums[i] > max || nums[i] < min)
                                                                                                          continue;
                                                                                                                  for (j = i + 1; j < numsSize; j++) {
                                                                                                                              if (nums[i] + nums[j] == target) {
                                                                                                                                              result[0] = i;
                                                                                                                                                              result[1] = j;
                                                                                                                                                                              *returnSize = 2;
                                                                                                                                                                                              return result;
                                                                                                                                                                                                          }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                          return NULL;
                                                                                                                                                                                                                          }