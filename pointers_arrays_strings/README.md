 0. 98 Battery st. <br> Write a function that takes a pointer to an int as parameter and updates the value it points to to 98. <br> Prototype: void reset_to_98(int *n); <br> 
<br> 1. Don't swap horses in crossing a stream <br> Write a function that swaps the values of two integers. <br> Prototype: void swap_int(int *a, int *b); <br> 
 <br> 2. This report, by its very length, defends itself against the risk of being read <br> Write a function tha
t returns the length of a string. <br> Prototype: int _strlen(char *s); <br> FYI: The standard library provides a si
milar function: strlen. Run man strlen to learn more. <br> 
 <br> 4. I can only go one way. I've not got a reverse gear <br> Write a function that prints a string, in reverse, followed by a new line. <br> Prototype: void print_rev(char *s); <br> 
 <br> 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes <br>Write a function that reverses a string. <br> Prototype: void rev_string(char *s); <br> 
 <br> 2. This report, by its very length, defends itself against the risk of being read <br> Write a function that returns the length of a string. <br> Prototype: int _strlen(char *s); <br> FYI: The standard library provides a similar function: strlen. Run man strlen to learn more. <br>
 7. Winning is only half of it. Having fun is the other half <br> Write a function that prints half of a string, followed by a new line. <br> Prototype: void puts_half(char *str); <br> The function should print the second half of the string <br> If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2 <br> 
 8. Arrays are not pointers <br> Prototype: void print_array(int *a, int n); <br> where n is the number of elements of the array to be printed <br> Numbers must be separated by comma, followed by a space <br> The numbers should be displayed in the same order as they are stored in the array <br> You are allowed to use printf <br> 
 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers <br> Write a function that convert a string to an integer. <br> Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. <br> 
