/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////																							////////////
/////////			Ricky Smith / 1 Aug 2018 / Ch14 Performance Lab "Link Lists"                   ////////////
////////																						  ////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "14_Perf_Lab_Linked_Lists_Header_NO_BONUS.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_full_list(node *n);
void print_full_list_specific_data(node *n);

int main(void)
{
	///// Initiating Student Structs and controlling memory size to be specific to actual size needed  /////
	node * Student01 = (node*)malloc(sizeof(node));  //head
	node * Student02 = (node*)malloc(sizeof(node));
	node * Student03 = (node*)malloc(sizeof(node));
	node * Student04 = (node*)malloc(sizeof(node));
	node * Student05 = (node*)malloc(sizeof(node));
	node * Student06 = (node*)malloc(sizeof(node));
	node * Student07 = (node*)malloc(sizeof(node));
	node * Student08 = (node*)malloc(sizeof(node));
	node * Student09 = (node*)malloc(sizeof(node));
	node * Student10 = (node*)malloc(sizeof(node));  //tail


	////////  Populate date into the Students  ////////
	strcpy(Student01->student_initials, "RRS");
	strcpy(Student01->student_musical_artist, "The Lonely Island");
	strcpy(Student01->student_dream_car, "Ford F-350 4x4 Programmed/Lifted");
	Student01->next_node = Student02;

	strcpy(Student02->student_initials, "BD");
	strcpy(Student02->student_musical_artist, "Creed");
	strcpy(Student02->student_dream_car, "Flinstone Car");
	Student02->next_node = Student03;

	strcpy(Student03->student_initials, "DM");
	strcpy(Student03->student_musical_artist, "Auqua");
	strcpy(Student03->student_dream_car, "The Magic School Bus");
	Student03->next_node = Student04;

	strcpy(Student04->student_initials, "WM");
	strcpy(Student04->student_musical_artist, "Master P");
	strcpy(Student04->student_dream_car, "Hummer H2");
	Student04->next_node = Student05;

	strcpy(Student05->student_initials, "KY");
	strcpy(Student05->student_musical_artist, "Metallica");
	strcpy(Student05->student_dream_car, "Challenger SRT Hellcat");
	Student05->next_node = Student06;

	strcpy(Student06->student_initials, "ZV");
	strcpy(Student06->student_musical_artist, "Techno Vape Music");
	strcpy(Student06->student_dream_car, "Limo");
	Student06->next_node = Student07;

	strcpy(Student07->student_initials, "RG");
	strcpy(Student07->student_musical_artist, "Mario Theme Song");
	strcpy(Student07->student_dream_car, "Prius");
	Student07->next_node = Student08;

	strcpy(Student08->student_initials, "TB");
	strcpy(Student08->student_musical_artist, "Bob Marley");
	strcpy(Student08->student_dream_car, "Lamborgini");
	Student08->next_node = Student09;

	strcpy(Student09->student_initials, "CY");
	strcpy(Student09->student_musical_artist, "I believe I can FLY");
	strcpy(Student09->student_dream_car, "Steve Urkel Car");
	Student09->next_node = Student10;

	strcpy(Student10->student_initials, "EP");
	strcpy(Student10->student_musical_artist, "Justin Bieber");
	strcpy(Student10->student_dream_car, "Barbie Corvette");
	Student10->next_node = NULL;

	/*
	//////////////  Original Struct build  /////////////////////////
	struct StudentInfo Student01 = { "RRS", "The Lonely Island", "Ford F-350 4x4 Programmed/Lifted",  NULL };
	struct StudentInfo Student02 = { "BD", "Creed", "Flinstone Car", &Student01 };
	struct StudentInfo Student03 = { "DM", "Auqua", "School Bus", &Student02 };
	struct StudentInfo Student04 = { "WM", "Master P", "Hummer H2", &Student03 };
	struct StudentInfo Student05 = { "KY", "Metallica", "Challenger SRT Hellcat", &Student04 };
	struct StudentInfo Student06 = { "ZV", "Techno Vape Music", "Limo", &Student06 };
	struct StudentInfo Student07 = { "RG", "Mario Theme Song", "Prius", &Student07 };
	struct StudentInfo Student08 = { "TB", "Bob Marley", "Lamborgini", &Student08 };
	struct StudentInfo Student09 = { "CY", "I believe I can FLY", "Steve Earkle Car", &Student09 };
	struct StudentInfo Student10 = { "EP", "Justin Bieber", "Barbie Corvette", &Student10 };
	*/
	//int menuInput = 0;
	int menuSelection = 0;
	int number = 0;
	_flushall();

	//starts Menu / Switch case

	do
	{
		char tempSelect[10] = { 0 };
		printMenu();  //prints menu 
		//scanf("%d", &menuSelection);
		//fgets(menuInput, sizeof(menuInput), stdin);
		//menuSelection = atoi(menuInput);

		fgets(tempSelect, sizeof(tempSelect), stdin);  //gets user's menu selection for below switch/case  *****Didn't allow continuous Switch loop*****
		menuSelection = atoi(tempSelect);  //converts temporary string into integer for menuSelection  *****Didn't allow continuous Switch loop*****

		switch (menuSelection)  //provide print options
		{
		case 1:  
			print_full_list(Student01);  //runs print_full_list function on Student01, prints all students and info via iterration
			break;

		case 2:  /////  Separate Case created for each student  /////
			{
				int studentSelection = 0;
				do
				{
					printf("\n\nWhich student's info do you want?\n");
					printf("1 - Student01\n2 - Student02\n3 - Student03\n4 - Student04\n5 - Student05\n6 - Student06\n7 - Student07\n8 - Student08\n9 - Student09\n10 - Student10\n11 - Exit Program\n - Enter a selection from the above menu options. \n\n");
					scanf("%d", &studentSelection);

					switch (studentSelection)
					{
					case 1:
						printf("Student01's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student01->student_initials, Student01->student_musical_artist, Student01->student_dream_car);
						break;

					case 2:
						printf("Student02's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student02->student_initials, Student02->student_musical_artist, Student02->student_dream_car);
						break;

					case 3:
						printf("Student03's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student03->student_initials, Student03->student_musical_artist, Student03->student_dream_car);
						break;

					case 4:
						printf("Student04's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student04->student_initials, Student04->student_musical_artist, Student04->student_dream_car);
						break;

					case 5:
						printf("Student05's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student05->student_initials, Student05->student_musical_artist, Student05->student_dream_car);
						break;

					case 6:
						printf("Student06's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student06->student_initials, Student06->student_musical_artist, Student06->student_dream_car);
						break;

					case 7:
						printf("Student07's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student07->student_initials, Student07->student_musical_artist, Student07->student_dream_car);
						break;

					case 8:
						printf("Student08's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student08->student_initials, Student08->student_musical_artist, Student08->student_dream_car);
						break;

					case 9:
						printf("Student09's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student09->student_initials, Student09->student_musical_artist, Student09->student_dream_car);
						break;

					case 10:
						printf("Student10's initials are:  %s\nStudent's musical taste is:  %s\nStudent's dream car is:  %s\n\n", Student10->student_initials, Student10->student_musical_artist, Student10->student_dream_car);
						break;
									
					default:
						break;
					}

				} while (studentSelection != 11);
			}
			break;
		
		case 3:
			print_full_list_specific_data(Student01);  //runs print_full_list_specific_data function on Student01, prints all students and specific info via iterration
			break;

		case 4:

			add_student(Student10);

			break;

		default:
			break;
		}
	} while (menuSelection != 0);

	return 0;
}
