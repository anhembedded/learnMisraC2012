#include <stdio.h>
#include <stdint.h>
#include <math.h>

int32_t main() {
    double a, b, c, delta, nghiem1, nghiem2, phanThuc, phanAo;

    printf("Nhap cac tham so a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    delta = b*b-4*a*c;

    // Truong hop 1
    if (delta > 0) {
        nghiem1 = (-b+sqrt(delta))/(2*a);
        nghiem2 = (-b-sqrt(delta))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",nghiem1 , nghiem2);
    }

    // Truong hop 2
    else if (delta == 0) {
        nghiem1 = nghiem2 = -b/(2*a);
        printf("root1 = root2 = %.2lf;", nghiem2);
    }

    // Truong hop 3
    else {
        phanThuc = -b/(2*a);
        phanAo = sqrt(-delta)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", phanThuc, phanAo, phanThuc, phanAo);
    }

    return 0;
}   