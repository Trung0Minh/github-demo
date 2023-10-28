#include <stdio.h>
#include <cmath>

double fac(int n) {
    if (n == 1) return 1;
    else return n * fac(n - 1);
}

int main1() {

    /*int n, k;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Nhap k: ");
    scanf_s("%d", &k);

    double S1 = 0;
    for (int i = 1; i <= n; i++) {
        S1 += 1.0 / i;
    }

    double S2 = 0;
    for (int i = 1; i <= n; i++) {
        S2 += (2 * i + 1) / (i * fac(i));
    }

    printf("S1 = %.2lf\n", S1);
    printf("S2 = %.2lf\n", S2);

    double S3 = 0;
    if (n > k) {
        S3 = fac(n) / (fac(k) / fac(n - k));
        printf("S3 = %.2lf\n", S3);
    }
    else printf("Khong co giai thua cua so am");
    */
    
    /*
    double n, min = INFINITY, max = -INFINITY, min1 = 0;
    printf("Nhap mot day so bat ki: \n");
    while (1) {
        scanf_s("%lf", &n);

        if (n == 0) {
            break;
        }

        if (n > max) {
            max = n;
        }
        else min = 0;

        if (n > 0 && n < min) {
            min = n;
        }

        min1 = abs(abs(-123.45) - abs(max));
        if (n < 0) {
            if (abs(abs(-123.45) - abs(n)) < min1) min1 = n;
        }  
    }

    printf("So lon nhat la: %.5lf\n", max);
    if (min != 0) printf("So thuc duong nho nhat la: %.5lf\n", min);
    else printf("Khong ton tai so thuc duong duoc nhap vao\n");
    printf("So thuc am gan voi -123.45 nhat la: %.5lf", min1);
    */



    return 0;
}


