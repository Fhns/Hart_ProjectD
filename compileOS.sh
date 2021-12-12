# Shane Hart

# ProjectA
bcc -ansi -c -o kernel_c.o kernel.c
as86 kernel.asm -o kernel_asm.o
ld86 -o kernel -d kernel_c.o kernel_asm.o
# dd if=kernel of=diskc.img bs=512 conv=notrunc seek=3

# ProjectB
# Step 3 - Read a sector from the disk - Interrupt 0x13
# dd if=message.txt of=diskc.img bs=512 count=1 seek=30 conv=notrunc

# ProjectC
./loadFile message.txt
./loadFile kernel
# Step 2 - Load a Program and Execute it
bcc -ansi -c -o tstpr1.o tstpr1.c
as86 -o userlib.o userlib.asm
ld86 -d -o tstpr1 tstpr1.o userlib.o
./loadFile tstpr1
# Step 3 - Terminate program system call
bcc -ansi -c -o tstpr2.o tstpr2.c
as86 -o userlib.o userlib.asm
ld86 -d -o tstpr2 tstpr2.o userlib.o
./loadFile tstpr2
# ProjectA
bcc -ansi -c -o shell_c.o shell.c
as86 userlib.asm -o userlib.o
ld86 -o shell -d shell_c.o userlib.o
./loadFile shell
