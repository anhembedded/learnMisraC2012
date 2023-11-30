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
void merge2SortedArray(int64_t s64_nums1[300] ,int64_t s64_nums1Size, int64_t s64_nums2[300], int64_t s64_nums2Size, int64_t s64_nums3[600], int64_t s64_nums3Size) {
   
    if((s64_nums1Size >= 300) && (s64_nums2Size >= 300) && (s64_nums3Size >= 600))
    {
        return;
    }
    int64_t i = 0;
    int64_t j = 0;
    int64_t k = 0;
    while((i < s64_nums1Size) && (j < s64_nums2Size))
    {
        if(s64_nums1[i] < s64_nums2[j])
        {
            s64_nums3[k] = s64_nums1[i];
            i++;
            k++;
        }
        else
        {
            s64_nums3[k] = s64_nums2[j];
            j++;
            k++;
        }
    }
    while(i < s64_nums1Size)
    {
        s64_nums3[k] = s64_nums1[i];
        i++;
        k++;
    }
    while(j < s64_nums2Size)
    {
        s64_nums3[k] = s64_nums2[j];
        j++;
        k++;
    }
   
};