#include <stdio.h>
int main() {
    int price, piece, totalprice;
    
    printf("Input Price : ");
    scanf("%d", &price);
    
    printf("Input Piece : ");
    scanf("%d", &piece);
    
    totalprice = price * piece;
    
    printf("TotalPrice = %d", totalprice);
    
    return 0;
}

// หมายเหตุ: สิ่งนี้ทำเพื่อใช้ในการศึกษาและแบ่งปันให้ผู้อื่นสามารถนำไปประยุกต์ใช้ได้ (การเขียนโปรแกรมโดยใช้ภาษา C) ซึ่งเป็นส่วนหนึ่งของวิชาหลักการเขียนโปรแกรม
