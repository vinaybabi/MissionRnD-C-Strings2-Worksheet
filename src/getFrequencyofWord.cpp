/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	int i = 0, j, str_len = 0, word_len = 0, temp_count = 0, count = 0;
	for (j = 0; str[j] != '\0'; j++);
	str_len = j;
	for (j = 0; word[j] != '\0'; j++);
	word_len = j;
	while (i < str_len)
	{
		j = 0;
		temp_count = 0;
		while (str[i + j] == word[j] && word[j] != '\0')
		{
			temp_count++;
			j++;
		}
		if (temp_count == word_len)
			count++;
		temp_count = 0;
		i++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

