#include <stdio.h>

void printArr(long long int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%lld ", arr[i]);
    }
    puts("");
}

long long int findIndex(long long int arr[], long long int n, long long int m,long long int sums[]) {
    long long int result = -1;
    long long int left = 0, right = n - 1;

    while (left <= right) {
        long long int mid = left + (right - left) / 2;
        long long int sum = sums[mid+1];

        if (sum <= m) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    long long int N, Q;
    scanf("%lld", &N);
    long long int B[N+1]= {0};

    long long int A[N];
    
    for (long long int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        if(i<1)continue;
        B[i]=B[i-1]+A[i-1];
    }
    B[N]=B[N-1]+A[N-1];
//	printArr(A, N);
//	printArr(B, N+1);
    scanf("%lld", &Q);


    for (long long int i = 1; i <= Q; i++) {
        long long int M;
        scanf("%lld", &M);

        long long int index = findIndex(A, N, M, B) + 1;
        if (!index) index = -1;

        printf("Case #%lld: %lld\n", i, index);
    }
    return 0;
}
/*
4
3 2 7 6
3
6
20
12

5
2 9 5 5 7
6
11
12
16
17
28
3
*/
