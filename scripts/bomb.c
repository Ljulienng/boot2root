
int main(int argc, char **argv)

{
	undefined4 uVar1;
	int in_stack_00000004;
	undefined4 *in_stack_00000008;

	if (in_stack_00000004 == 1)
	{
		infile = stdin;
	}
	else
	{
		if (in_stack_00000004 != 2)
		{
			printf("Usage: %s [<input_file>]\n", *in_stack_00000008);
			/* WARNING: Subroutine does not return */
			exit(8);
		}
		infile = (_IO_FILE *)fopen((char *)in_stack_00000008[1], "r");
		if ((FILE *)infile == (FILE *)0x0)
		{
			printf("%s: Error: Couldn\'t open %s\n", *in_stack_00000008, in_stack_00000008[1]);
			/* WARNING: Subroutine does not return */
			exit(8);
		}
	}
	initialize_bomb(argv);
	printf("Welcome this is my little bomb !!!! You have 6 stages with\n");
	printf("only one life good luck !! Have a nice day!\n");
	uVar1 = read_line();
	phase_1(uVar1);
	phase_defused();
	printf("Phase 1 defused. How about the next one?\n");
	uVar1 = read_line();
	phase_2(uVar1);
	phase_defused();
	printf("That\'s number 2.  Keep going!\n");
	uVar1 = read_line();
	phase_3(uVar1);
	phase_defused();
	printf("Halfway there!\n");
	uVar1 = read_line();
	phase_4(uVar1);
	phase_defused();
	printf("So you got that one.  Try this one.\n");
	uVar1 = read_line();
	phase_5(uVar1);
	phase_defused();
	printf("Good work!  On to the next...\n");
	uVar1 = read_line();
	phase_6(uVar1);
	phase_defused();
	return 0;
}
