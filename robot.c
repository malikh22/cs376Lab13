/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Tanya L. Crenshaw, Nathan Schmedake, Kyra Ulat
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Hera Malik
>>>>>>> 3038e0285416e844afcd1857a1bca3b3b264c01c
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
	 "%s    i_i    \n"

	 "%s   [o_o]   \n"

	 "%s   [O_O]   \n"

	 "%s  /|___|\\ \n"
	 "%s   d   b   \n",blank, blank, blank, blank);

  blank = blank - 10;
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (U)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
