#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	//go through each string in argv
	//why am I skipping argv[0]?

	for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	//lets make our own array of strings

	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	//accessing the elements of the multidimensional array

	printf("Fist letter of first state is: %c\n", states[0][0]);

	int num_states = 4;
	
	for (i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;

}
	

