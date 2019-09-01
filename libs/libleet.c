/*
 * libleet.c A serial api for leetcode
 *
 * Copyright (c) 2019. All Rights Reserved
 *
 * Author: qqliang<grapel2013@gmail.com>
 *
 */

#include "libleet.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

	int cnt = 0;
	int index = 0;
	int *retsize = malloc(2 * sizeof(int));
	if (retsize == NULL)
		return NULL;

	for (cnt = 0; cnt < numsSize; cnt++) {
		for (index = 1; index < numsSize; index++) {
			if (nums[cnt] + nums[index] == target) {
				retsize[0] = cnt;
				retsize[1] = index;
				*returnSize = 2;
				return retsize;
			}
		}
	}

	return NULL;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{

}

int lengthOfLongestSubstring(char * s)
{

}

double findMedianSortedArrays(int* nums1,
		int nums1Size, int* nums2, int nums2Size)
{

}

char * longestPalindrome(char * s)
{

}

char * convert(char * s, int numRows)
{

}
