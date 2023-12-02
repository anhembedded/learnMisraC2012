#include "codeLearnIo.h"

/**
 * @brief Remove all occurrences of a specific value from an array.
 *
 * This function removes all occurrences of a specific value from an array.
 * It iterates through each element in the array and checks if it is equal to
 * the specified value. If a match is found, the element is skipped and the
 * remaining elements are shifted to the left. Finally, the function returns the
 * new size of the array after removing the specified value.
 *
 * @param s32_array Pointer to the array.
 * @param arraySize Size of the array.
 * @param val The value to be removed from the array.
 * @return The new size of the array after removing the specified value.
 */
int32_t removeElement(int32_t s32_array[ARR_MAX_SIZE], uint32_t arraySize,
                      int32_t val) {
  uint32_t u32_i = 0U;
  uint32_t count = 0U;
  if (arraySize > ARR_MAX_SIZE) {
    count = -1;
  } else {

    while (u32_i < arraySize) {

      if (s32_array[u32_i] == val) {
        s32_array[u32_i] = s32_array[arraySize - 1U];
        arraySize--;
        u32_i++;
      } else {
        count++;
      }
    }
  }
  return (count);
}
