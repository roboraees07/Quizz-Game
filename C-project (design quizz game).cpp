#include<stdio.h>

int main() {
   int i, a;
   int wrong_counter = 0;
   int correct_counter = 0;
   int total_questions = 10;
   float percentage = 0;
   char name[2000]; //for player name

   printf("\t\t\t\t\n                            Type 1 to  START THE QUIZ:");
   scanf(" %d", & i); //taking values for choices
  
  switch (i) 
    {
    case 1:

    printf("\n ENTER YOUR NAME:");
    scanf(" %s", & name);
    printf("\n\t\t\t\t WELCOME! %s\n\n", name);

    printf("\ni) C++ is an object oriented language while C, BASIC, and Pascal are _____ languages.\n");
    printf("1.procedural \n2.scripting\n3.web based\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 1)    // winning condition
	    { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else  // for wrong choice of answer
       {
	      printf(" \t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\  (correct answer is 1. procedural)\n");
           wrong_counter++;
       }

    printf("\nii)The goto statement causes control to go to a/an ?\n");
    printf("1. function \n2. switch statement-\n3.variable\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 3)    // winning condition
	    { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else    // for wrong choice of answer
	    {
		
         printf(" \n\t\t\t\t      WRONG !!!\n");
         printf("\t\t\t\    (correct answer is 3. variable)\n");
          wrong_counter++;
        }

    printf("\niii) Bundling data and functions together is known as\n");
    printf(" \n1.overloading \n2.encapsulation-\n3.polymorphism\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 2)  // winning condition
        {
	  
	      printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else    // for wrong choice of answer 
	   { 
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\    (correct answer is 2. encapsulation)\n");
           wrong_counter++;
       }

    printf("\niv)HTML is an abbreviation of\n");
    printf(" \n1.HiTech Meaningful Language \n2.HyperText Markup Language-\n3.HiTech Markup Language\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 2)  // winning condition
        { 
		  printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else  // for wrong choice of answer
	    {
		
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\   (correct answer is 2. HyperText Markup Language)\n");
            wrong_counter++;
        }

    printf("\nv) _____ is a device from where the information is sent.\n");
    printf(" \n1.Transmitter\n2.Spreadsheet-\n3.Simulation\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 1)  // winning condition
        {
	       printf(" \n\t\t\t\t   CORRECT !!!\n");
            correct_counter++;
        } 
	else  // for wrong choice of answer
      {
	       printf(" \n\t\t\t\t      WRONG !!!\n");
           printf("\t\t\t\    (correct answer is 1. Transmitter)\n");
            wrong_counter++;
       }

    printf("\nvi) LAN is an abbreviation of\n");
    printf(" \n1.Local Access Network \n2.Large Area Network-\n3.Local Area Network\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 3) // winning condition
	   { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
       } 
	else   // for wrong choice of answer
	  { 
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\    (correct answer is 3. Local Area Network)\n");
           wrong_counter++;
     }

    printf("\nvii) Which from the following do not represent numbers with decimal places?\n");
    printf(" \n1.integer \n2. float-\n3. long double\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 1)   // winning condition 
	    { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
       } 
	else  // for wrong choice of answer
	    { 
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\   (correct answer is 1. integer)\n");
           wrong_counter++;
        }

    printf("\nviii)Algorithms that improve automatically through experience is known as\n");
    printf(" \n1. machine learning\n2.computer program-\n3.artificial intelligence\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 1) // winning condition
	    { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else   // for wrong choice of answer
	   { 
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\    (correct answer is 1. machine learning)\n");
           wrong_counter++;
       }

    printf("\nix) Web pages are interlinked by using\n");
    printf(" \n1. HTTP\n2.hyperlinks-\n3.slider\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 2)  // winning condition
	    { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else   // for wrong choice of answer
	    { 
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\    (correct answer is 2. hyperlinks)\n");
           wrong_counter++;
        }

    printf("\nx)URL is an abbreviation for\n");
    printf(" \n1. Universal Resource Locator \n2.Uniform Resource Locator-\n3.Universal Resource Location\n\t\t\t\tSelected option is: ");
    scanf(" %d", & a);
    if (a == 2)  // winning condition
	    { 
          printf(" \n\t\t\t\t   CORRECT !!!\n");
           correct_counter++;
        } 
	else   // for wrong choice of answer
	    { 
          printf(" \n\t\t\t\t      WRONG !!!\n");
          printf("\t\t\t\    (correct answer is 2. Uniform Resource Locator)\n");
           wrong_counter++;
        }

   
    case 0: // case 0 for quiting the game
        break;
       
    default: // if choice is not 0 or 1
          printf("\n\n\t\t\t invalid input !!!!");
        break;
   }
  
   percentage = (correct_counter * 100) / total_questions;
    printf("\n\t\t\t\tYOUR QUIZ IS COMPLETED\n\n");
    printf("**************************************RESULT**************************************");
    printf("\n\n\t\t\t\t Total Questions:%d", total_questions);
    printf("\n\n\t\t\t\t Correct Answers:%d", correct_counter);
    printf("\n\n\t\t\t\t Wrong Answers:%d", wrong_counter);
    printf("\n\n\t\t\t\t Percentage:%.2f%\n\n", percentage);
    printf("************************************THANK YOU**************************************");

  return 0;
}
