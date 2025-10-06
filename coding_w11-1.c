#include <stdio.h>

// ฟังก์ชันสำหรับรับและแสดงผลคะแนน
void inputAndShow() {
    int math, physics, chemistry;

    printf("Enter Math: ");  
    scanf("%d", &math);

    printf("Enter Physics: ");
    scanf("%d", &physics);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n",
           math, physics, chemistry);
}

// ฟังก์ชันหลัก
int main() {
    inputAndShow(); // เรียกใช้ฟังก์ชัน
    return 0;
}
