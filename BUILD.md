# Building the dice set

To build the dice set, it would be recommended to use GCC. 
But if you must use Clang, then follow the instructions for Clang.

## Build using GCC (Recommended)

Simply compile as so:

```
g++ src/main.cpp -o cplusdice
```

This will create the executable `cplusdice` (if on Linux) or `cplusdice.exe` 
(if on Windows).

## Build using Clang

Similar to the GCC instructions, just run

```
clang++ src/main.cpp -o cplusdice
```

## Verifying the compilation

In the event that you suspect that it didn't compile correctly despite the 
compilation finishing with no error message, then you can verify the executable 
just by attempting to run it. 
Like so:

If you're on Linux:
```
./cplusdice
```

If you're on Windows:
```
./cplusdice.exe
```
