# Assembly

## Assemble the Code

- Use an assembler like `nasm` to assemble the code into an object file:

```bash
nasm -f elf64 main.s -o main.o
```

## Link the Object File

- Use a linker like `ld` to link the object file into an executable:

```bash
ld main.o -o main
```

## Run the Executable

- Now you can run the executable:

```bash
./main
```
