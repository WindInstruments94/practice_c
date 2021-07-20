/* shortcut functions for arrays

NOTE:
arrays in C are passed to functions as pointers and do not
retain their size – a size parameter is passed in along
with the array */

int getLargestElement(int array[], int length)
{
    int largest = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    return largest;
}

int getSmallestElement(int array[], int length)
{
    int smallest = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    return smallest;
}

float getAverageOfArray(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    float avg = (float)sum/length;
    return avg;
}
