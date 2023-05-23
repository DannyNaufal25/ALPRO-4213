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
void selecsort(int array[],int size){
    for(int step=0;step<size-1;step++){
            int min_idx=step;
        for(int i= step+1;i<size;i++){
            if (array[i]>array[min_idx]){
                min_idx=i;
            }
            swapN(array[min_idx],array[step]);
        }
    }
}
int main(){
int data[]={3,2,5,2,2,1,4};
int size = sizeof(data)/sizeof(data[0]);

//cetak array awal
cout <<"Array awal\n";
printarray(data,size);
cout<< endl;

cout <<"proses sorting\n";
selecsort(data,size);
cout << endl;
//cetak array tersortir
cout <<"array tersorting\n";
printarray(data,size);
}
