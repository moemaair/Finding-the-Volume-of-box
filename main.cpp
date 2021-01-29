#include <iostream>

using namespace std;



class box{
    
public:
    int lenght;
    int width;
    int height;

};
int main(){
box box1;
int volume;
    box1.lenght = 16;
    box1.width =8;
    box1.height=14;
    
    volume = box1.lenght * box1.width * box1.height;
 
    cout<<"The volume is: "<<volume<<"cm²"<<endl;




    
    return 0;
}











