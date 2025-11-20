Report: How I Set Up the Environment for Working with Linux 

1. Installing VS Code 

I installed Visual Studio Code to work with code. 

 

2. Enabling WSL 

I enabled WSL (Windows Subsystem for Linux) on my computer. 
 This allows me to run Linux directly inside Windows. 

 

3. Installing the Required Tools 

Through the terminal in WSL, using the following commands: 

sudo apt update 
sudo apt install gcc g++ clang gdb lldb make cmake 
 

I installed the necessary packages for development: 

gcc/g++ 

clang/clang++ 

gdb 

lldb 

make 

cmake 

 

After installing the packages, I checked them with the following commands: 

gcc --version   

g++ --version   

clang --version   

clang++ --version   

gdb --version   

lldb --version   

make --version   

cmake --version   
 

 

4. Summary 

Now I have a ready-to-use development environment: 

VS Code as a convenient editor 

Linux via WSL 

all the necessary compilers and tools for working with code. 