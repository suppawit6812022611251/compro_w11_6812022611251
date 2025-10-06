#include <stdio.h>

// รับค่าคะแนนจากผู้ใช้
void inputScores(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &arr[i][0]);
        printf("Physics: ");
        scanf("%f", &arr[i][1]);
        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);
        printf("\n");
    }
}

// แสดงตารางคะแนน
void printTable(float arr[3][3]) {
    printf("Score Table:\n");
    printf("Student   Math    Physics   Chemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d         %.2f   %.2f     %.2f\n",
               i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
    printf("\n");
}

// แสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {  
    float sumMath = 0, sumPhysics = 0, sumChemistry = 0;

    for (int i = 0; i < 3; i++) {
        sumMath += arr[i][0];
        sumPhysics += arr[i][1];
        sumChemistry += arr[i][2];
    }

    printf("Average per subject:\n");
    printf("Math: %.2f\n", sumMath / 3);
    printf("Physics: %.2f\n", sumPhysics / 3);
    printf("Chemistry: %.2f\n", sumChemistry / 3);
}

// ฟังก์ชันหลัก
int main() {
    float scores[3][3];

    inputScores(scores);
    printTable(scores);
    printAverage(scores);

    return 0;
}