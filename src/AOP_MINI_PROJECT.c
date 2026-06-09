#include <stdio.h>

struct Student {
    char name[50];
    char uid[20];
    char dob[15];
    float math, networks, programming;
    float average;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

int main() {
    int n, i;
    printf("ENTER NUMBER OF STUDENTS WHOM GRADE IS TO BE GENERATED:");
    scanf("%d", &n);
    printf("-----------------------------------------------------------------------------------------\n");
    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\n--- ENTER DETAILS OF STUDENT %d ---\n", i + 1);
        printf("ENTER NAME: ");
        scanf(" %[^\n]", s[i].name);
        printf("ENTER UID: ");
        scanf(" %[^\n]", s[i].uid);
        printf("ENTER DOB (DD-MM-YYYY): ");
        scanf(" %[^\n]", s[i].dob);
        printf("ENTER MARKS IN APPLIED MATHEMATICS: ");
        scanf("%f", &s[i].math);
        printf("ENTER MARKS IN COMPUTER NETWORKS: ");
        scanf("%f", &s[i].networks);
        printf("ENTER MARKS IN ART OF PROGRAMMING: ");
        scanf("%f", &s[i].programming);

        s[i].average = (s[i].math + s[i].networks + s[i].programming) / 3.0;
        s[i].grade = calculateGrade(s[i].average);
    }

    printf("-----------------------------------------------------------------------------------------\n");
    printf("AM=APPLIED MATHEMATICS, CN=COMPUTER NETWORKS, AOP=ART OF PROGRAMMING\n");
    printf("-----------------------------------------------------------------------------------------\n");
    // Print Table
    printf("\n\n-------------------- STUDENT GRADING SYSTEM --------------------\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("| %-15s | %-10s | %-10s | %-5s | %-5s | %-5s | %-7s | %-5s |\n", 
           "Name", "UID", "DOB", "AM", "CN", "AOP", "Avg", "Grade");
    printf("-----------------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("| %-15s | %-10s | %-10s | %-5.1f | %-5.1f | %-5.1f | %-7.2f | %-5c |\n",
               s[i].name, s[i].uid, s[i].dob,
               s[i].math, s[i].networks, s[i].programming,
               s[i].average, s[i].grade);
        printf("-----------------------------------------------------------------------------------------\n");
    }
    printf("THANK YOU FOR USING STUDENT GRADING SYSTEM\n");
    printf("-----------------------------------------------------------------------------------------\n");
    
    return 0;
}
