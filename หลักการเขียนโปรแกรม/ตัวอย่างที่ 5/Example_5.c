#include <stdio.h>

int main() {
    int price, discount, saleprice;
    
    printf("Input Price : ");
    scanf("%d", &price);
    
    discount = price * 0.15;
    saleprice = price - discount;
    
    printf("SalePrice = %d", saleprice);
    
    return 0;
}

// หมายเหตุ: สิ่งนี้ทำเพื่อใช้ในการศึกษาและแบ่งปันให้ผู้อื่นสามารถนำไปประยุกต์ใช้ได้ (การเขียนโปรแกรมโดยใช้ภาษา C) ซึ่งเป็นส่วนหนึ่งของวิชาหลักการเขียนโปรแกรม
