### `malloc` and `calloc` in C

Both `malloc` (memory allocation) and `calloc` (contiguous allocation) are standard library functions in C used for dynamic memory allocation. They are declared in the `stdlib.h` header file. Below is a detailed explanation of each function, followed by a tabular comparison.

### `malloc`

- **Prototype:** `void *malloc(size_t size);`
- **Purpose:** Allocates a single block of memory of the specified size.
- **Initialization:** The allocated memory is not initialized; it contains garbage values.
- **Parameters:** 
  - `size`: The number of bytes to allocate.
- **Return Value:** Returns a pointer to the allocated memory. If the allocation fails, it returns `NULL`.

### `calloc`

- **Prototype:** `void *calloc(size_t num, size_t size);`
- **Purpose:** Allocates multiple contiguous blocks of memory, each of the specified size.
- **Initialization:** The allocated memory is initialized to zero.
- **Parameters:**
  - `num`: The number of blocks to allocate.
  - `size`: The size of each block.
- **Return Value:** Returns a pointer to the allocated memory. If the allocation fails, it returns `NULL`.

### Comparison Table

| Feature          | `malloc`                                        | `calloc`                                         |
|------------------|-------------------------------------------------|--------------------------------------------------|
| **Header File**  | `#include <stdlib.h>`                           | `#include <stdlib.h>`                            |
| **Function**     | `void *malloc(size_t size)`                     | `void *calloc(size_t num, size_t size)`          |
| **Parameters**   | `size`: Total number of bytes to allocate       | `num`: Number of blocks, `size`: Size of each block |
| **Initialization** | Memory is not initialized; contains garbage values | Memory is initialized to zero                    |
| **Memory Layout** | Single block of specified size                 | Multiple contiguous blocks of specified size     |
| **Usage**        | `ptr = malloc(10 * sizeof(int));`               | `ptr = calloc(10, sizeof(int));`                 |
| **Return Value** | Pointer to the allocated memory or `NULL`       | Pointer to the allocated memory or `NULL`        |
| **Performance**  | Generally faster since it does not initialize memory | Slightly slower due to memory initialization     |

### Example Usage

#### `malloc`
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
```

#### `calloc`
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
```

In the `malloc` example, the memory is not initialized, so the program explicitly sets values. In the `calloc` example, the memory is initialized to zero, so the initial values printed are all zeros.
