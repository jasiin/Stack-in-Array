#include <iostream>
using namespace std;

int maksimal = 5;
string arrayBuku[5];
int top = 0;

bool isFull()
{
  if( top == maksimal ){
    return true;
  }else{
    return false;
  }
}

bool isEmpty()
{
  if( top == 0 ){
    return true;
  }else{
    return false;
  }
}

void pushArray(string data){
  if( isFull() ){
    cout << "Data penuh" << endl;
  }else{
    arrayBuku[top] = data;
    top++;
  }
}

void popArray()
{
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    arrayBuku[top-1] = "";
    top--;
  }
}

void displayArray(){
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    cout << "Data stack array : " << endl;
    for( int i = maksimal - 1; i >= 0; i-- ){
      if( arrayBuku[i] != "" ){
        cout << "Data : " << arrayBuku[i] << endl;
      }
    }
    cout << "\n" << endl;
  }
}

void peekArray(int posisi){
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    int index = top;
    for( int i = 0; i < posisi; i++ ){
      index--;
    }
    cout << "Data posisi ke-" << posisi << " : " << arrayBuku[index] << endl;
  }
}

void changeArray(string data, int posisi){
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    int index = top;
    for( int i = 0; i < posisi; i++ ){
      index--;
    }
    arrayBuku[index] = data;
  }
}

int countArray()
{
  if( isEmpty() ){
    return 0;
  }else{
    return top;
  }
}

void destroyArray(){
  for( int i = 0; i < top; i++ ){
    arrayBuku[i] = "";
  }
  top = 0;
}


int main(){

  pushArray("1");
  displayArray();
  pushArray("2");
  pushArray("3");
  pushArray("4");
  pushArray("5");
  displayArray();

  pushArray("0");
  displayArray();

  popArray();
  displayArray();

  cout << "Apakah data full ? : " << isFull() << endl;
  cout << "Apakah data kosong ? : " << isEmpty() << endl;

  peekArray(3);

  cout << "\nBanyak data : " << countArray() << endl;

  changeArray("12", 3);
  displayArray();
  
}

