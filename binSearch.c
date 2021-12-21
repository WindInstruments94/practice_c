/* binary search of a sorted array */

// #include <stdbool.h>
// #include <string.h>

bool binarySearch(int array[], int length, int target)
{
    if (length == 1 && array[0] != target)
    {
        return false;
    }

    int start = 0;
    int end = length;
    int middle = length / 2;

    if (target == array[middle])
    {
        return true;
    }
    else if (target < array[middle])
    {
        int newLength = middle;
        int newArray[newLength];
        memcpy(newArray, array, sizeof(array[0]) * newLength);
        return binarySearch(newArray, newLength, target);
    }
    else if (target > array[middle])
    {
        int newLength = end - middle;
        int newArray[newLength];
        memcpy(newArray, &array[middle], sizeof(array[0]) * newLength);
        return binarySearch(newArray, newLength, target);
    }
  
    // to stop compiler error messages
    return false;
}
