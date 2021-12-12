// Shane's Operating System Shell
// shell.c

void main() {

	// ProjectC
	// Step 4 - The Shell - making your own user program
	syscall(0, "SHELL>", 0, 0);
	syscall(5, 0, 0, 0);
	// Step 5 - Shell Command "type"
	char type[5];
	char buffer[13312];
	int typeI;
	int i;
	type[0] = 't';
	type[1] = 'y';
	type[2] = 'p';
	type[3] = 'e';
	type[4] = '\0';
	for (i = 0; i < 4; i += 1)
	{
		if (chars[i] == type[i])
		{
			typeI = 0;
			break;
		}
	}
	typeI = 1;
	if (typeI == 1)
	{
		syscall(3, "type messag", buffer, 0);
		syscall(0, buffer, 0, 0);
	}
	if (typeI == 0)
	{
		printString("file not found");
		break;
	}
	buffer[0] = '\0';
	// Step 6 - Shell Command "exec"
	char exec[5]
	char* chars;
	int execI;
	exec[0] = 'e';
	exec[1] = 'x';
	exec[2] = 'e';
	exec[3] = 'c';
	exec[4] = '\0';
	syscall(1, chars, 0, 0);
	for (i = 0; i < 4; i += 1)
	{
		if (chars[i] == exec[i])
		{
			execI = 0;
			break;
		}
	}
	execI = 1;
	if (execI == 1)
	{
		syscall(4, "exec tstpr2", 0x2000, 0);
	}
	if (execI == 0)
	{
		printString("file not found");
		break;
	}
	chars[0] = '\0';
    // ProjectD
    // Step 2 - List the directory contents
    char dir[4]
	int dirI;
	dir[0] = 'd';
	dir[1] = 'i';
	dir[2] = 'r';
	dir[3] = '\0';
	syscall(1, chars, 0, 0);
	for (i = 0; i < 3; i += 1)
	{
		if (chars[i] == dir[i])
		{
			dirI = 0;
			break;
		}
	}
	dirI = 1;
	if (dirI == 1)
	{
		syscall(4, "dir", 0x2000, 0);
	}
	chars[0] = '\0';
    // Step 3:Delete File
    char del[4];
	int delI;
    del[0] = 'd';
	del[1] = 'e';
	del[2] = 'l';
	del[3] = '\0';
	for (i = 0; i < 3; i += 1)
	{
		if (chars[i] == del[i])
		{
			delI = 0;
			break;
		}
	}
	delI = 1;
	if (delI == 1)
	{
		syscall(3, "del messag", buffer, 0);
		syscall(0, buffer, 7, 0);
	}
	buffer[0] = '\0';
    // Step 5 - Copying a file
    char copy[5];
	int copyI;
    copy[0] = 'c';
	copy[1] = 'o';
	copy[2] = 'p';
	copy[3] = 'y';
    copy[4] = '\0';
	for (i = 0; i < 4; i += 1)
	{
		if (chars[i] == copy[i])
		{
			copyI = 0;
			break;
		}
	}
	copyI = 1;
	if (copyI == 1)
	{
		syscall(3, "copy" + filename1 + filename2, buffer, 0);
		syscall(0, buffer, filename1, 0);
        syscall(0, buffer, filename1 + 1, 0);
	}
	buffer[0] = '\0';
    // Step 6 - Creating a text file
    char create[7];
	int createI;
    create[0] = 'c';
	create[1] = 'r';
	create[2] = 'e';
	create[3] = 'a';
    create[4] = 't';
    create[5] = 'e';
    create[6] = '\0';
	for (i = 0; i < 6; i += 1)
	{
		if (chars[i] == create[i])
		{
			createI = 0;
			break;
		}
	}
	createI = 1;
	if (createI == 1)
	{
		syscall(3, "copy textfl", buffer, 0);
        syscall(0, buffer, textfl, 0);
	}
	buffer[0] = '\0';
}
