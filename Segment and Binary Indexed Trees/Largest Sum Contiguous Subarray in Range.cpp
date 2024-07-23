//Function to update a value in input array and segment tree.
void update(int arr[], int arrSize, int index, int value)
{
    arr[index - 1] = value;  // Updating the value in the array
    int n = arrSize;
    for (int i = 0; i < n; ++i) {
      
    }
}

//Funciton to return the Maximum-Sum in the range.
int query(int arr[], int n, int left, int right) 
{
    // Function to calculate the maximum sum subarray using Kadane's algorithm
    int max_so_far = arr[left - 1];
    int curr_max = arr[left - 1];

    for (int i = left; i < right; i++) {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }

    return max_so_far;
}
