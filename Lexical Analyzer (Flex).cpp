//Program that counts number of lines and characters in a string using Flex

% {
	//Declaring two counters one for number of lines other for number of characters 

	int num_lines = 0;
	int num_chars = 0;
	%}

/*rule 1 counts the number of lines, rule 2 counts the number of characters and rule 3 specifies when to stop
taking input*/

%%
\n ++num_lines; ++num_chars;
. ++num_chars;
%%

int main(int argc, char** argv)
{
	yylex();
	printf("# of lines = %d, # of chars = %d\n",
		num_lines, num_chars);

	system("pause");
	return 0;
}
