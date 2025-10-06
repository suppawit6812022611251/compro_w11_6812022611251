#include <stdio.h>

// ฟังก์ชันคำนวณค่าเฉลี่ย
float average(int a, int b, int c) { 
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chemistry;  // ตัวแปรเก็บคะแนน
    float avg;

    printf("Enter Math score: ");
    scanf("%d", &math);
    printf("Enter Physics score: ");
    scanf("%d", &physics);
    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    avg = average(math, physics, chemistry);  // เรียกใช้ฟังก์ชันคำนวณค่าเฉลี่ย

    printf("\nMath = %d\nPhysics = %d\nChemistry = %d\nAverage = %.2f\n",  
           math, physics, chemistry, avg);  // แสดงผลคะแนนและค่าเฉลี่ย

    return 0;
}