Generating subarrays of a given array in C++ involves iterating through all possible starting and ending points of the subarrays. Here is a basic example demonstrating how to generate and print all subarrays of a given array:

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to print all subarrays of the given array
void printSubarrays(vector<int> &arr) {
    int n = arr.size();

    // Loop for starting point of subarray
    for (int i = 0; i < n; ++i) {
        // Loop for ending point of subarray
        for (int j = i; j < n; ++j) {
            // Print the subarray arr[i...j]
            for (int k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    cout << "All subarrays of the given array are:" << endl;
    printSubarrays(arr);

    return 0;
}
```

### Explanation

1. **Loop for Starting Point of Subarray**:
   - The outer loop with variable `i` iterates over each element of the array, treating each element as the potential starting point of a subarray.

2. **Loop for Ending Point of Subarray**:
   - The inner loop with variable `j` starts from the current starting point `i` and goes to the end of the array. This defines the ending point of the subarray.

3. **Print the Subarray**:
   - The innermost loop with variable `k` iterates from the starting point `i` to the ending point `j` and prints the elements of the subarray.

### Example Output

For the array `{1, 2, 3, 4}`, the output will be:
```
All subarrays of the given array are:
1 
1 2 
1 2 3 
1 2 3 4 
2 
2 3 
2 3 4 
3 
3 4 
4 
```

This code prints all possible subarrays of the given array. Each subarray is printed on a new line. Adjust the array in the `main` function to test with different inputs.
