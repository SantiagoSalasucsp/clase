#include <iostream>

using namespace std;

class Point {

public:
int x,y;
Point()
{
    cout<<"constructor invoked"<<endl;

};

~Point(){
    cout<<"invoked destructor"<<endl;
}

};

int main(){
// p est en el stack y el Porint esta en el heap 
// si yo quiero inmprimir x tendria que poner cout<<p->x<<endl;
// el contructor se imboca cuando se crea la memoria, y el destructor se invoca cuando se liber la memora 
//
if(true){
    Point p;

} 
cout<<"p"<<endl;

}
