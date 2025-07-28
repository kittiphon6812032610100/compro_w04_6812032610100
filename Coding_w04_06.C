#include <stdio.h>

const int GLOBAL_RATE = 10;  

void calculate() {
    const int LOCAL_BONUS = 50;  
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    return 0;
}
//1.ค่าคงที่GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร = ค่าที่ได้จะต่างกันในด้านค่าคงที่
//2.จะเกิดอะไรขึ้นถ้าเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;? = เกิด compile-time error
//3.ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้? = เพราะ main รับได้เเค่ค่าเดียว
//4. อภิปรายและสรุปผลที่ได้จากการทดลอง = const ใช้กำหนดค่าคงที่ที่ไม่ต้องการให้เปลี่ยนแปลง,global → ใช้ได้ทั่วโปรแกรม,local → ใช้ได้เฉพาะในฟังก์ชันนั้นๆ
//พยายามเปลี่ยนค่าจะทำให้เกิด error
