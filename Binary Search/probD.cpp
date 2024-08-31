#include <stdio.h>

long long findLongestSegment(int N, long long M, int A[]) {
    long long maxLength = -1;
    long long currentSum = 0;
    int start = 0;
    for (int end = 0; end < N; end++) {
        currentSum += A[end];

        while (currentSum > M) {
            currentSum -= A[start];
            start++;
        }
        maxLength = (end - start + 1 > maxLength) ? end - start + 1 : maxLength;
    }
    return maxLength;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int N;
        long long M;
        scanf("%d %lld", &N, &M);
        int A[N];
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[j]);
        }
        long long result = findLongestSegment(N, M, A);
        if(!result)result=-1;
        printf("Case #%d: %lld\n", i, result);
    }

    return 0;
}
/*
2
5 6
1 2 3 4 5
4 3
4 1 3 8

3
3 10
2 9 2
4 11
2 9 1 1
3 2
2 2 2
*/
