#include <stdio.h>
#define MAX 1000

void nhap(int *n, int *m) {
    do {
        scanf("%d%d", n, m);
        if (*n < 1 || *n > MAX || *m < 1 || *m > MAX) {
            printf("Khong hop le, xin vui long nhap!\n");
        }
    } while (*n < 1 || *n > MAX || *m < 1 || *m > MAX);
}

void nhapMang(long long a[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
        }
    }
}

void xuatMang(long long a[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Xuat mang vua nhap a[%d][%d]: %lld ", i, j, a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, m;
        long long a[MAX][MAX];

        nhap(&n, &m);
        nhapMang(a, n, m);
        xuatMang(a, n, m);
    }

    return 0;
}
