#include <stdio.h>

void saveStudentdata() {
    FILE *file;
    int i = 1, num_student = 0, student_age = 0;
    char student_name[30];
    file = fopen("Data.txt", "w");
    if (file == NULL) {
        printf("File can not be opened!!");
    }
    else {
        printf("Enter the number of students: ");
        scanf("%d",&num_student);
        for (i; i <= num_student; i++ ) {
            printf("Enter the name of the student %d : ", i);
            scanf("%s",student_name);
            printf("\n");
            printf("Enter the age of the student %d : ",i);
            scanf("%d",&student_age);
            printf("\n");
            fprintf(file, "%d. Name: %s, Age: %d\n",i, student_name, student_age);
        }
        fclose(file);
        printf("Successfully saved %d student data", num_student);
    }


}
int main(void) {
    saveStudentdata();
    return 0;
}
