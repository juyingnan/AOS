/*
 * write.c
 *
 *  Created on: 2013-4-18
 *      Author: rye
 */
int main() {
	//Test Create
		int fd;
		int readSize;
		Create("TestSysCall");
		fd = Open("TestSysCall");
		Write("Test my system call.",21,fd);
		Close(fd);
		Halt();
}
