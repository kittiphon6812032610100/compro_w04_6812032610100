#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//1.เเบบstatic จะจําค่าเดิมไว้ จาก1ไป2,3...ต่อไปได้ , เเบบไม่มีstatic จะไม่จดจําค่าเดิมไว้หรือถูกรีเซ็ทเป็น0ทุกครั้ง 
//เพราะ เเบบstaticจะจําค่าเดิมไว้ตลอด ส่วนเเบบไม่มีstatic จะไม่จําค่าไว้
//2.ความแตกต่างของNon-Static Variable? =  non-static ไม่จําค่าหลังจบฟังก์ชัน
//3.อภิปราย และสรุปผลที่ได้จากการทดลอง = static เหมาะกับการเก็บข้อมูลต่อเนื่อง non-static ใช้เมื่อต้องการค่าชั่วคราวไม่ต้องจําต่อ
//ควรเลือกใช้ static,non-static ให้เหมาะกับลักษณะการทำงานที่ต้องการ