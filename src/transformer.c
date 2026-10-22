#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "tools.h"



void convert_instructions_to_binary(const char *your_abominations_name, const char *name_of_the_computers_abomination) {
  FILE *your_abomination = fopen(your_abominations_name, "r"); //opens your abomination
  if (!your_abomination) {
    printf("\033[31mCould not open the requested input file.\033[0m\n"); //gives you ***EMOTIONAL DAMAGE*** if error
    return;
  }
  FILE *the_computers_abomination = fopen(name_of_the_computers_abomination, "wb"); //opens your computer's abomination
  if (!the_computers_abomination) {
    printf("\033[31mCould not open the requested output file. Are you running that on a 70's computer ?!\033[0m\n "); //see comment on line 9
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

      if (strcmp(instruction, "May_you_please_show_the_ASCII_value_of_the_current_cell") == 0) {
	result = 1;
      } else if (strcmp(instruction, "May_you_please_increment_the_value_of_the_current_cell_by_one") == 0) {
        result = 2;
      } else if (strcmp(instruction, "May_you_please_decrement_the_value_of_the_current_cell_by_one") == 0) {
	result = 11;
      } else if (strcmp(instruction, "May_you_please_begin_a_loop_and_stop_it_only_if_the_value_stored_in_the_cell_where_it_started_is_zero") == 0) {
	result = 3;
      } else if (strcmp(instruction, "May_you_please_end_the_current_loop_which_will_stop_only_if_the_value_stored_in_the_cell_where_it_started_is_zero") == 0) {
	result = 4;
      } else if (strcmp(instruction, "May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_right") == 0) {
	result = 6;
      } else if (strcmp(instruction, "May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_left") == 0) {
	result = 5;
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
	printf("\033[33mThere is an error in your code, I don't know where \033[0m\n");
	save_it_or_not = 0;
      }
      wipeString(instruction); //see tools.h
  } else {
    
      if ((c != '\n') && (c != ' ')) {
      if(addChar(instruction, c)) {
            printf("\033[31mYour instructions are too damn big for the char[512], be more delicate\033[0m\n");
      } //see tools.h
      }
      save_it_or_not = 0;

  }

  if (save_it_or_not) { //it is just using the int as a boolean
    fwrite(&result, sizeof(result), 1, the_computers_abomination);
    fflush(the_computers_abomination);
  }
}
 fclose(your_abomination);
 fclose(the_computers_abomination);
}

void convert_instructions_to_stacki(const char *your_abominations_name, const char *name_of_the_computers_abomination) {// does C have static inline? if it has combine the function before with this one
      FILE *your_abomination = fopen(your_abominations_name, "r"); //opens your abomination
      if (!your_abomination) {
            printf("\033[31mCould not open the requested input file.\033[0m\n"); //gives you ***EMOTIONAL DAMAGE*** if error
            return;
      }
      FILE *the_computers_abomination = fopen(name_of_the_computers_abomination, "wb"); //opens your computer's abomination
      if (!the_computers_abomination) {
            printf("\033[31mCould not open the requested output file. Are you running that on a 70's computer ?!\033[0m\n "); //see comment on line 9
            fclose(your_abomination);
            return;
      }
      fputs("push 0", the_computers_abomination); //the value used as the cell pointer
      int c;
      int save_it_or_not = 0;
      char result;
      char instruction[1024] = "";
      char string_to_save[2048] = "";
      while ((c = fgetc(your_abomination)) != EOF) {
            save_it_or_not = 1;

            if (c == ';') {

                  if (strcmp(instruction, "May_you_please_show_the_ASCII_value_of_the_current_cell") == 0) {
                        //Stacki doesn't support it
                        printf("\033[33mThere is an error in your code, I don't know where \033[0m\n");// Put this inside of a function
                  } else if (strcmp(instruction, "May_you_please_increment_the_value_of_the_current_cell_by_one") == 0) {
                        result = 2;
                  } else if (strcmp(instruction, "May_you_please_decrement_the_value_of_the_current_cell_by_one") == 0) {
                        result = 11;
                  } else if (strcmp(instruction, "May_you_please_begin_a_loop_and_stop_it_only_if_the_value_stored_in_the_cell_where_it_started_is_zero") == 0) {
                        result = 3;
                  } else if (strcmp(instruction, "May_you_please_end_the_current_loop_which_will_stop_only_if_the_value_stored_in_the_cell_where_it_started_is_zero") == 0) {
                        result = 4;
                  } else if (strcmp(instruction, "May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_right") == 0) {
                        result = 6;
                  } else if (strcmp(instruction, "May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_left") == 0) {
                        result = 5;
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
                        printf("\033[33mThere is an error in your code, I don't know where \033[0m\n");
                        save_it_or_not = 0;
                  }
                  wipeString(instruction); //see tools.h // Replace with strcpy(instruction, ""); or instruction[0] = '\0';
            } else {

                  if ((c != '\n') && (c != ' ')) {

                  }
                  save_it_or_not = 0;

            }

            if (save_it_or_not) { //it is just using the int as a boolean

            }
      }
      fclose(your_abomination);
      fclose(the_computers_abomination);
}

int main(int argc, char* argv[]) {
      char *input = NULL;
      char *output = NULL;
      char *target = NULL;
      char opt;
      while ((opt = getopt(argc, argv, "s:o:t:")) != -1) { //-s : source
            //-o : output
            switch (opt) {
                  case 's':
                        input = (char *)malloc(strlen(optarg));
                        strcpy(input, optarg);
                        // I know it works, why need it
                        break;
                  case 'o':
                        output = (char*)malloc(strlen(optarg));
                        strcpy(output, optarg);
                        break;
                  case 't': //target
                        target = (char*)malloc(strlen(optarg));
                        strcpy(target, optarg);
                        break;
                  default:
                        putchar('\n');
                        //printf("Unknown argmment : -%c", optarg);
                        exit(EXIT_FAILURE);
                        break;
            }
      }

        if ((input == NULL) && (output == NULL) && (target == NULL)) {
              logo(); //see tools.h
      } else if ((input == NULL) ^ (output == NULL)) {
       printf("\033[31mERROR : You may have forgotten something in your request\033[0m\n");
       return 1;
      } else {
            if (target == NULL) { /* default */
                  convert_instructions_to_binary(input, output);
            } else if (strcmp(target, "stacki")) {
                  convert_instructions_to_stacki(input, output);
            } else if (strcmp(target, "pf-exec")) /* politef*ck-exec */ {
                  convert_instructions_to_binary(input, output);
            } else {
                  printf("\033[31mERROR : You invented that target name, right, right, cuz I don't remember it being listed ? \033[0m\n");
            }
            return 0;
      }
}
