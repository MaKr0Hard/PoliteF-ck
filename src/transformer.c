#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools.h"

void convert_instructions_to_binary(const char *your_abominations_name, const char *name_of_the_computers_abomination) {
  FILE *your_abomination = fopen(your_abominations_name, "r"); //opens your abomination
  if (!your_abomination) {
    printf("Could not open the requested input file.\n"); //gives you ***EMOTIONAL DAMAGE*** if error
    return;
  }
  FILE *the_computers_abomination = fopen(name_of_the_computers_abomination, "wb"); //opens your computer's abomination
  if (!the_computers_abomination) {
    printf("Could not open the requested output file.\n "); //see comment on line 9
    fclose(your_abomination);
    return;
  }

int c;
int save_it_or_not = 0;
char result;
char instruction[1024] = "";
while ((c = fgetc(your_abomination)) != EOF) {
  save_it_or_not = 1;

  if (c == ';') {

      if (strcmp(instruction, "May_you_please_show_the_value_of_the_current_cell") == 0) {
	result = 1;
      } else if (strcmp(instruction, "May_you_please_increment_the_value_of_the_current_cell_by_one") == 0) {
        result = 2;
      } else if (strcmp(instruction, "May_you_please_decrement_the_value_of_the_current_cell_by_one") == 0) {
	result = 11;
      } else if (strcmp(instruction, "May_you_please_begin_a_loop") == 0) {
	result = 3;
      } else if (strcmp(instruction, "May_you_please_end_the_current_loop") == 0) {
	result = 4;
      } else if (strcmp(instruction, "May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_right") == 0) {
	result = 5;
      } else if (strcmp(instruction, "May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_left") == 0) {
	result = 6;
      } else if (strcmp(instruction, "May_you_please_begin_a_function") == 0) {
	result = 7;
      } else if (strcmp(instruction, "May_you_please_end_the_current_function") == 0) {
	result = 8;
      } else if (strcmp(instruction, "May_you_please_call_the_corresponding_syscall_of_the_current_cell") == 0) {
	result = 9;
      } else if (strcmp(instruction, "May_you_please_jump_to_the_last_function_starting_from_here") == 0) {
	result = 10;
      } else if (strcmp(instruction, "May_you_please_ask_the_guy_in_front_of_the_screen_for_a_value") == 0) {
	result = 12;
      } else {
	printf("There is an error in your code, I don't know where \n");
	save_it_or_not = 0;
      }
      wipeString(instruction); //see tools.h
  } else {
    
      if ((c != '\n') && (c != ' ')) {
      addChar(instruction, c); //see tools.h
      }
      save_it_or_not = 0;

  }

  if (save_it_or_not == 1) {
    fwrite(&result, sizeof(result), 1, the_computers_abomination);
    fflush(the_computers_abomination);
  }
}
 fclose(your_abomination);
 fclose(the_computers_abomination);
}

int main(int argc, char* argv[]) {
  if (argc < 3 ) return 1;
  convert_instructions_to_binary(argv[1], argv[2]);
  return 0;
}
