#include <iostream>
using namespace std;
void swapN(int &a,int &b){
int temp=a;
a=b;
b=temp;
}
//print array
void printarray(int array[],int size){
for(int i=0;i<size;i++){
    cout<<"["<<array[i]<<"]";
}
cout <<"\n";
}
void bubblesort(int array[],int size){
    for(int step=0;step<size;step++){
        for(int i=0;i<size-1;i++){
            if (array[i]<array[i+1]){
                swapN(array[i],array[i+1]);
            }
        }
    }
}
int main(){
int data[]={3,2,5,2,2,4,1};
int size = sizeof(data)/sizeof(data[0]);

//cetak array awal
cout <<"Array awal\n";
printarray(data,size);
cout<< endl;

cout <<"proses sorting\n";
bubblesort(data,size);
cout << endl;
//cetak array tersortir
cout <<"array tersorting\n";
printarray(data,size);
}
