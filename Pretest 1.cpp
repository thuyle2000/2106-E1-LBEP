#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //getche
#include <math.h>
#include <ctype.h> //tolower

typedef struct STUDENTS {
	char name[30];
	char enrollment_no[10];
	float science_mark;
	float math_mark;
	float english_mark;
	float total_mark;
	float average_mark;
} students;

//khai bao cac ham
void Question1();
void Question2();

int main() {

	int s;

	while(1) {

		printf ("  ************************************************************\n");
		printf ("  * Selecting appropriate action: %28c\n",'*');
		printf ("  %-17c1. Finding the MAX number Program%10c\n",'*','*');
		printf ("  %-17c2. Student Management Program%14c\n",'*','*');
		printf ("  %-17c3. Quit program  %26c\n",'*','*');
		printf ("  ************************************************************\n");
		printf ("==> ");
		scanf ("%d", &s);


		switch (s) {
			case 1:
				Question1();
				break;

			case 2:
				Question2();
				break;
				
			case 3:
				exit(0);
			default:
				printf ("\nInvalid!!!\n");
				break;

		}
	}


} // ket thuc ham main

//dinh nghia ham Question1()
void Question1() {

	int count = 0;
	int max = 0;
	int num[100];
	char yn;

	printf ("****Finding the MAX number Program****\n\n");
	do {
		printf ("\nPlease enter a positive number: ");
		scanf ("%d", &num[count]);
		fflush (stdin);

		printf ("\n Continue [y/n]: ");
		yn = getche();
		yn = tolower(yn);
		count++;

	} while (yn == 'y');

	max = num[0];
	for (int i = 1; i < count; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}

	printf ("The entered number are: ");
	for (int i = 0; i < count; i++) {
		printf ("%d ", num[i]);
	}
	printf ("\n\nThe greatest is: %d \n", max);
}


//dinh nghia ham Question2()
void Question2() {
	int n = 0;
	int s = 0;
	
	printf ("****Student Management Program****\n\n");
	do {
		printf ("How many students do you want to manage: ");
		scanf ("%d", &n);
		if (n < 1 || n > 99) {
			printf ("The number of student must be between 1 and 100. Press any key to continue...\n");
			getch();
			printf ("\n");
		}
	} while (n < 1 || n > 99);
	
	students list[n];
	
	
	fflush (stdin);
	printf ("\nPlease enter students data: \n");
	for (int i = 0; i < n; i++) {
		printf ("\nStudent no %d\n", i+1);
		printf ("Name: ");
		gets (list[i].name);
		printf ("Enrollment No: ");
		gets (list[i].enrollment_no);
		printf ("Science Mark: ");
		scanf ("%f", &list[i].science_mark);
		printf ("Math Mark: ");
		scanf ("%f", &list[i].math_mark);
		printf ("English Mark: ");
		scanf ("%f", &list[i].english_mark);
		
		list[i].total_mark =  list[i].science_mark + list[i].math_mark +
		                      list[i].english_mark;
		list[i].average_mark = list[i].total_mark / 3;
		fflush (stdin);
	}
	printf ("\n\n****Student details****\n");
	for (int i = 0; i < n; i++) {
		printf ("\nStudent no: %d\n", i+1);
		printf ("%10s: %s  \n", "Name", list[i].name);
		printf ("%10s: %s  \n", "Enroll No", list[i].enrollment_no);
		printf ("%18s: %.2f  \n", "Science Mark", list[i].science_mark);
		printf ("%15s: %.2f  \n", "Math Mark", list[i].math_mark);
		printf ("%18s: %.2f  \n", "English Mark", list[i].english_mark);
		printf ("%16s: %.2f  \n", "Total Mark", list[i].total_mark);
		printf ("%18s: %.2f  \n", "Average Mark", list[i].average_mark);
	}
}


