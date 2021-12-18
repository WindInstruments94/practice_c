/* shortcut functions for arrays

NOTE:
Arrays in C are passed to functions as pointers and do not
retain their length – a length parameter is passed in along
with the array. */

int max(int array[], int length)
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

int min(int array[], int length)
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

float average(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    float avg = (float)sum/length;
    return avg;
}
