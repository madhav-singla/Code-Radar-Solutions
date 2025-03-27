void deflateBalloons(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - min;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr != 0)
        {
            count++;
        }
    }
}