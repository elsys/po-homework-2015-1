	#include <stdio.h>
	#include <string.h>

	char create_letter_distribution_diagram(char *StringArray);

	int main() {
	char StringArray[1000];
	scanf ("%[^\n]s",StringArray);
	create_letter_distribution_diagram(StringArray);
	return 0;
	}

	char create_letter_distribution_diagram(char *StringArray) {
	int IntArray[26];
	char CharArray[27];
	int count, count1, lenth, tracker1, tracker2, helper;
	for (count = 0; count < 26; count++) CharArray[count] = 'a' + count;
	for (count = 0; count < 26; count++) IntArray[count] = 0;
	lenth = strlen (StringArray);
	for (count = 0; count < lenth; count++) {
	for (count1 = 0; count1 < 26; count1++) {
	if (StringArray[count] == 'A' + count1 || StringArray[count] == 'a' + count1) IntArray[count1]++;
	}
	}
	for (count = 0; count < lenth; count++) {
	for (tracker1 = 0, tracker2 = 1; tracker1 < lenth; tracker1++,tracker2++) {
	if (IntArray[tracker1] < IntArray[tracker2]) {
	helper = IntArray[tracker1];
	IntArray[tracker1] = IntArray[tracker2];
	IntArray[tracker2] = helper;
	helper = CharArray[tracker1];
	CharArray[tracker1] = CharArray[tracker2];
	CharArray[tracker2] = helper;
	}
	}
	}
	for (count = 0; count < 26; count++) printf ("\n%c = %d",CharArray[count],IntArray[count]);
	}
