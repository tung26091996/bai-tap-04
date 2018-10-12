#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool validatedata(int a, int b) {
    if (a < 0 || b < 0) {
        printf("Do dai 2 canh phai lon hon 0");
        return false;
    }
}

float ch(int cva, int cvb) {
    return (float) sqrt(pow(cva, 2) + pow(cvb, 2));
}


int main() {
    int cva, cvb;
    printf("nhap vao gia tri canh goc vuong a");
    scanf("%d", &cva);
    printf("nhap vao gia tri canh goc vuong b");
    scanf("%d", &cvb);
    bool isvalidatedata = validatedata(cva, cvb);
    if (isvalidatedata) {
        printf("ket qua cua canh huyen la: %2.f", ch(cva, cvb));
    }

    return 0;
}