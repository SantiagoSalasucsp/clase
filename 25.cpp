#include <iostream>

using namespace std;
class Integer{
    public:
        int val;
        explicit Integer(int v){
            val=v;
            cout<<"default constructor"<<v<<endl;}

        
            

};
int* getPtrToFive(){
            int* x= new int;
            *x=5;
            return x;
        
        }




//(*this).val==this->val
//dengling pointrt= es un puntero que apunta a una direccion de meoria cullo contenido es indefinido 
// new es una forma de reservar memoria y se reserva hasta que tu la elimines int *x=new int;
// cundo ponesmo el int x(variables locales), esto se va a la memoria stack, y cuando reservamos con el new se reserva memoria en el heap
//Para liberar memoria en el heap se pone delete x; 
//






int main(){
int num;
cout<<"cuantos numeros quieres";
cin>>num;
int *arr=new int[num];
for (int i=0;i<num;++i)
{
    cout<<"NUmero"<<i<<":";
    cin>>arr[i];
}
for (int i=0;i<num;++i)
{cout<<arr[i]<<endl;
}
delete[]arr;


for (int i=0;i<num;++i)
{cout<<arr[i]<<endl;
}








}
