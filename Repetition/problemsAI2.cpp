#include <stdio.h>
#include <stdbool.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        int size;
        scanf("%d", &size);

        int arr[size];
        int prefixSum[size];

        // Read array elements and calculate prefix sums
        int totalSum = 0;
        for (int a = 0; a < size; a++) {
            scanf("%d", &arr[a]);
            totalSum += arr[a];
            prefixSum[a] = totalSum;
        }

        bool flag = false;

        for (int x = 1; x < size; x++) {
            // If the prefix sum at index x is half the total sum, it's a valid split point.
            if (prefixSum[x - 1] == (totalSum - prefixSum[x - 1])) {
                flag = true;
                break;
            }
        }

        if (flag) {
            printf("Case #%d: Yes\n", i);
        } else {
            printf("Case #%d: No\n", i);
        }
    }

    return 0;
}

