#include <stdio.h>

#define QUIZZ_NUM 5
#define STUDENTS_NUM 5

int main(void)
{
	int grade[STUDENTS_NUM][QUIZZ_NUM];
	int student, quiz, total, high, low;
	float average;

	for (student = 0; student < STUDENTS_NUM; student++) {
		printf("Enter the grades of student %d: ", student + 1);
		for (quiz = 0; quiz < QUIZZ_NUM; quiz++)
			scanf("%d", &grade[student][quiz]);
	}
	printf("\n");

	for (student = 0; student < STUDENTS_NUM; student++) {
		printf("Total grades and average grade of studet %d: ", student + 1);
		total = 0;
		for (quiz = 0; quiz < QUIZZ_NUM; quiz++)
			total += grade[student][quiz];
		average = (float)total / (float)QUIZZ_NUM;
		printf("%3d %3.1f\n", total, average);
	}
	printf("\n");

	for (quiz = 0; quiz < QUIZZ_NUM; quiz++) {
		printf("Average, highest and lowest grade of quiz %d: ", quiz + 1);
		high = 0;
		low = 100;
		total = 0;
		for (student = 0; student < STUDENTS_NUM; student++) {
			total += grade[student][quiz];
			if (grade[student][quiz] > high)
				high = grade[student][quiz];
			if (grade[student][quiz] < low)
				low = grade[student][quiz];  //arrat name
		}
		average = (float)total / (float)QUIZZ_NUM;  //type conversion
		printf("%3.1f %3d %3d\n", average, high, low);   //result type %f? %d? 
	}
	return 0;
}