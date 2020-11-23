/*	
Made by Gabriel Velasco Fernandes.
All rights reserved.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nameMax 102

int main() {
	typedef struct student_ {
		char name[102];
		int id;
		float grade1;
		float grade2;
		float average;
	} *student;
	
	int n, i;
	
	// # of students:
	scanf("%d", &n);
	
	// Allocation of n students in memory:
	student students = (student) malloc( n * sizeof( struct student_ ) );
	
	// Student input info and average calculation:
	for( i=0; i < n; i++ ) {
		getchar();
		fgets(students[i].name, nameMax, stdin);
		scanf("%d", &students[i].id);
		scanf("%f", &students[i].grade1);
		scanf("%f", &students[i].grade2);
		
		// '\0' to virtually trim the string:
		students[i].name[strlen(students[i].name)-1] = '\0';
		
		students[i].average = ( students[i].grade1 + students[i].grade2 ) / 2;
	}
	
	// Display info from each student:
	for( i=0; i < n; i++ ) {
		printf("%d", students[i].id);
			printf("\t");
		printf("%s", students[i].name);
			printf("\t");
		printf("%.2f", students[i].average);
		printf("\n");
	}
}
