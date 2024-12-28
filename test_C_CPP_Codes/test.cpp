// Tutorial : https://youtu.be/y-oLhL3qQGQ?si=AZ05z-cBCk9tK172

/* Install MinGW from sourceforge
select g++ and base while installing MinGW
copy the bin folder's path of MinGW and add it in the system path variable */

#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World!";
    return 0;
}

/* Commands to run code : 

open terminal, move to the directory that contains the code 
compile the code with gcc by running the command : g++ file_name.cpp
a new exe file would be generated for e.g. a.exe
run the command : .\file_name (.\a) 

OR

just install the code runner extension in vs code 
and run the code from the run option in VS code by clicking Run Code
*/