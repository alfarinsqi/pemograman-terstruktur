#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std; 

int main (){ 
ofstream myfile; 

myfile.open("DDPpraktikumAbsen.txt", ios::app); 

cout<<"------------"<<endl; 
cout<<"menulis file"<<endl;
cout<<"------------"<<endl;

if(!myfile.fail()){ 
myfile<<"ddpin ajaa"<<endl; 
myfile<<"happy eney belajar ddp"<<endl; 
myfile<<"bismillah asdos 2024"<<endl;

myfile.close(); 

cout<<"text berhasil ditulis kedalam file"; 


}
else{
	cout<<"file tidak ditemukan"<<endl;
}
_getche(); 

return 0;
}


