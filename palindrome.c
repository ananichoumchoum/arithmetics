#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	char original[20]={};
	char cleaned[20]={};
	char reversed[20]={};

	printf("Enter string: ");
	scanf("%s", original);//Store string entered by the user in original C string
	int j = 0;
	int strSizeO = strlen(original);
	//Make cleaned version of "original" string:
	for(int i=0;i<strSizeO;i++){
	    if(isdigit(original[i]) !=0){ // - Loop through all the characters in "original"
		cleaned[j] = original[i];//		Take one character, if that character is a numeric digit, or
		j+=1;
	    }
	    else if(isalpha(original[i]) !=0){
		cleaned[j] = tolower(original[i]);	    //		upper- or lower-case letter, concatenate it to the end of the "cleaned" C string. lower
		j+=1;
	    }
	   
	}
	//Reverse "cleaned" string, store reversed version in "reversed" C string.
        int strSize = strlen(cleaned);
	for (int i = strSize - 1; i >= 0; --i) {
	reversed[strSize - 1 - i] = cleaned[i];
	}
	//Compare "cleaned" and "reversed" string.
	if (strcmp(cleaned, reversed) == 0) {
	    printf("%s and %s are the same",cleaned,reversed);
	printf("\n%s is a palindrome", original);
	}
	else {
	printf("%s and %s are not the same",cleaned,reversed);
	printf("\n%s is not a palindrome", original);
	}
	return 0;
}

