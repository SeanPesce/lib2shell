# lib2shell  

**Author: Sean Pesce**  

## Overview  

Shared library implementations that transform the containing process into a shell on load (useful for privilege escalation, argument injection, file overwrites, etc.). A write-up of a privilege escalation scenario using this technique can be found on [my blog](https://seanpesce.blogspot.com/2023/03/leveraging-ssh-keygen-for-arbitrary.html).

## Usage  

**([Many examples on GTFOBins](https://gtfobins.github.io/#+library%20load))**  

Examples for Unix operating systems:  

```
ssh-keygen -D ./lib2shell.so
```

```
openssl req -engine ./lib2shell.so
```


Examples on Windows:  

```
ssh-keygen -D .\lib2shell.dll
```

```
openssl req -engine .\lib2shell.dll
```

## Compiling  

Unix:  

```
make
```

Windows:  

Open the project in Visual studio, select your build configuration ("Release" and your target architecture), then in the top menu click *Build*→*Build Solution*.  

---------------------------------------------

For inquiries and/or information about me, visit my **[personal website](https://SeanPesce.github.io)**.  
