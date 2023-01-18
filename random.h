#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



char randchar(){

	//srand(time(NULL));

	short asciiUpperBound = 65;
	short numLetters = 25;

	char toBeReturned = (char)(rand()%numLetters)+asciiUpperBound;

	return toBeReturned;	


}
