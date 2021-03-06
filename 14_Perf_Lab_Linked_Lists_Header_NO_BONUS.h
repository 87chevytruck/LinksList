/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////																							////////////
/////////			Ricky Smith / 1 Aug 2018 / Ch14 Performance Lab "Link Lists"                   ////////////
////////																						  ////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//////  defines struct  //////
typedef struct StudentInfo {
		
	char student_initials[4];			//Each students initals
	char student_musical_artist[50];	//Each students favoriate musical artist
	char student_dream_car[50];			//Each studnets dream car
	struct StudentInfo * next_node;	    //Required data for linked list completion
}node;


//////  Primary print menu for user selections  ///////
int printMenu(void)
{
	printf("Please choose an option below to display the data you are looking for:  \n");
	printf("1 - Display full list of student and data \n2 - Display a specific student and that student's full data\n3 - Display a specific student and one specific data entry\n0 - Exit this program\n - Enter a selection from the above menu options. \n\n");

	return 0;
}


////////  Print the full list of students and all thier data  /////////
void print_full_list(node *n)
{
	while (n != NULL)
	{
		printf("Student's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", n->student_initials, n->student_musical_artist, n->student_dream_car);
		n = n->next_node;  //iterates through the next_node
	}
}


////////  Print all students but only one data entry  ////////
void print_full_list_specific_data(node *n)
{

	int studentData = 0;
	int dataMenuSelection = 0;

	do
	{
		printf("What data for students would you like to see?\n");
		printf("1 - Student's Initials \n2 - Student's Musical Taste\n3 - Student's Dream Car\n4 - Exit Program\n - Enter a selection from the above menu options. \n\n");
		scanf("%d", &dataMenuSelection);

		switch (dataMenuSelection)  //start switch-case loop for selectable options
		{
		case 1:
			while (n != NULL)
			{
				printf("%s's initials are:  %s\n\n", n, n->student_initials);  //prints student initials
				n = n->next_node;
			}
			break;

		case 2:
			while (n != NULL)
			{
				printf("%s's musical taste is:  %s\n\n", n, n->student_musical_artist);  //prints student musical tastes
				n = n->next_node;
			}
			break;

		case 3:
			while (n != NULL)
			{
				printf("%s's dream car is:  %s\n\n", n, n->student_dream_car);  //prints student dream cars
				n = n->next_node;
			}
			break;

		default:
			break;
		}
	} while (dataMenuSelection != 4);
}