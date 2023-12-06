#include "codeLearnIo.h"

/**
 * @brief Merges two sorted arrays into a third array.
 * 
 * This function takes two sorted arrays, `s64_nums1` and `s64_nums2`, and merges them into a third array, `s64_nums3`.
 * The merged array will also be sorted in ascending order.
 * 
 * @param s64_nums1 The first sorted array.
 * @param s64_nums1Size The size of the first sorted array.
 * @param s64_nums2 The second sorted array.
 * @param s64_nums2Size The size of the second sorted array.
 * @param s64_nums3 The merged sorted array.
 * @param s64_nums3Size The size of the merged sorted array.
 */
void merge2SortedArray(int64_t const s64_nums1[ARR_MAX_SIZE] ,int64_t s64_nums1Size, int64_t const s64_nums2[ARR_MAX_SIZE], int64_t s64_nums2Size, int64_t s64_nums3[ARR_MAX_SIZE * 2], int64_t s64_nums3Size) {
   
    if((s64_nums1Size >= ARR_MAX_SIZE) && (s64_nums2Size >= ARR_MAX_SIZE) && (s64_nums3Size >= ((int64_t)ARR_MAX_SIZE *2U)))
    {
        return;
    }
    int64_t s64_i = 0;
    int64_t s64_j = 0;
    int64_t s64_k = 0;
    while((s64_i < s64_nums1Size) && (s64_j < s64_nums2Size))
    {
        if(s64_nums1[s64_i] < s64_nums2[s64_j])
        {
            s64_nums3[s64_k] = s64_nums1[s64_i];
            s64_i++;
            s64_k++;
        }
        else
        {
            s64_nums3[s64_k] = s64_nums2[s64_j];
            s64_j++;
            s64_k++;
        }
    }
    while(s64_i < s64_nums1Size)
    {
        s64_nums3[s64_k] = s64_nums1[s64_i];
        s64_i++;
        s64_k++;
    }
    while(s64_j < s64_nums2Size)
    {
        s64_nums3[s64_k] = s64_nums2[s64_j];
        s64_j++;
        s64_k++;
    }
   
}