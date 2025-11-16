# 1337 School C Pool Experience

This repository contains my **C programming exercises** completed during the **1337 School C Pool**. The pool was an intensive introduction to C programming, covering fundamental concepts such as loops, conditions, functions, pointers, arrays, strings, and basic algorithms.

It also includes **rush00**, a collaborative weekend project where I worked in a team and presented our solution in front of the staff.

## Repository Structure

```
├── c00/ - c11/     # Daily exercises by subject
└── rush00/         # Team weekend project
```

## Highlights by Day

- **c00** : Basics: Writing characters, alphabets, numbers, and simple combinatorial functions
- **c01** : Pointers & functions: Working with pointers, swapping, string lengths, and array manipulations++
- **c02** : Strings: Copying, modifying, and analyzing strings, handling special characters
- **c03** : String operations: Comparing, concatenating, and searching strings
- **c04** : Advanced basics: Implementing `atoi`, number printing, and base conversions
- **c05** : Mathematics: Factorials, powers, Fibonacci, primes, and square roots
- **c06** : Command line: Handling program parameters, printing and sorting arguments
- **c07** : Memory & arrays: Duplicating strings, creating ranges, joining strings, splitting, and base conversions
- **c08** : Structures & headers: Using structs, writing custom headers, and implementing display functions
- **c09** : Libft exercises: Basic library creation including string and memory functions
- **c11** : Functional programming & sorting: Implementing `map`, `foreach`, `any`, `count_if`, sorting functions, and a calculator `do-op`
- **rush00** : Mini project: Collaborative weekend project building a small program using concepts from the pool

## How to Compile and Run

1. Navigate to the exercise directory:

```bash
cd c00
```

2. Compile using the provided Makefile:

```bash
make
```

3. Run the compiled program (replace program_name with the specific exercise):

```bash
./ex00/program_name
```

## How to Remove executables:

```bash
make clean
```

### Rush00 Project

Navigate to the rush00 directory and compile:

```bash
cd rush00
make
./rush00 6 6
```

To run other rush programs (rush01, rush02, etc.), compile and execute individually:

```bash
make rush01
./rush01 3 9
```