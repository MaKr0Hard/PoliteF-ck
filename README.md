# PoliteF*ck
Wilrak0v's WilF\*ck but less Wil and more F\*ck

- Learn this and brainf*ck will feel like nothing
- All the commands are explicit 
- It can be run with Wilrak0v's execution file

Compiling the sources (which if you dont know "src" stands for "source") :
- clang or gcc exe.c -o exec
- clang or gcc transformer.c -o trans

Using it :
- ./trans <your_file's_name> <name_of_bytecode_file>   //to build bytecode file
- ./exec <name_of_bytecode_file>   //to execute the bytecode file
- You can test with the provided test.fak file that should output R

The commands (I think you will understand them all) :
|   WF   |   PoliteF\*ck                                                                                                                       |
|--------|-------------------------------------------------------------------------------------------------------------------------------------|
|   <    | May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_left         |
|   >    | May_you_please_move_the_pointer_by_one_position_to_what_the_original_developper_of_this_programming_language_calls_the_right        |
|   +    | May_you_please_increment_the_value_of_the_current_cell_by_one                                                                       |
|   -    | May_you_please_decrement_the_value_of_the_current_cell_by_one                                                                       |
|   [    | May_you_please_begin_a_loop                                                                                                         |
|   ]    | May_you_please_end_the_current_loop                                                                                                 |
|   {    | May_you_please_begin_a_function                                                                                                     |
|   }    | May_you_please_end_the_current_function                                                                                             |
|   ^    | May_you_please_jump_to_the_last_function_starting_from_here                                                                         |
|   @    | May_you_please_call_the_corresponding_syscall_of_the_current_cell                                                                   |
|   .    | May_you_please_show_the_value_of_the_current_cell                                                                                   |
|   ,    | May_you_please_ask_the_guy_in_front_of_the_screen_for_a_value                                                                       |

Oh, and don't forget the semicolon after every instruction.

If there is a problem with the exec file, you may ask Wilrak0v for changes
