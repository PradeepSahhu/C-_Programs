#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b;
    b = ++a;
    cout<<a<<" "<<b<<endl;

    int c = 10;
    int d;
    d = c++;
    cout<<c<<" "<<d<<endl;

    return 0;
}
//A ‘.cpp’ file is likely a C++ source file. A text file containing C++ code. You cannot “run” a C++ source file. It may not even be a complete program. 
//It’s quite typical that C++ programs are divided into parts that are put in their own files.

//C++ source files need to be processed by a piece of software called a C++ compiler to convert the text instructions in the file into object files that contain instructions for a microprocessor. 
//These files are then processed by a program called a linker that combines all the parts and pieces stored in libraries from the C++ language to make an executable file.

//On a Mac, you can type ‘c++’ at the terminal, and it will either give you instructions how to install a C++ compiler, or an error complaining about there being not input files. 
//You can compile a simply c++ file where the entire program is contained in one file: