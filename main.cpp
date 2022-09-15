//
//  main.cpp
//  C++ ДЗ 22
//
//  Created by Павел on 15.09.2022.
//

#include <iostream>
using namespace std;

template <typename T>
void show_arr(T *arr, const int length){
    cout<<"[";
    for (int i=0; i<length;i++)
        cout << arr[i]<<" ";
    cout<<"]\n";
}

void Swap_Array(int *from, int *to) {
    for ( ; from + 1 < to; from++) {
        swap(*from, *(from + 1));
        from++;
    }
}

void func(int *pn, int m){
    int x=*pn;
    for(int i=1; i<m; i++){
        *pn=*pn*x;
}
    cout<<*pn;
}

int main(int argc, const char * argv[]) {
    
    //Задача 1. Меняем местами пары элементов, используя указатели
    cout<<"Задача 1.\nИзначальный Массив : \n";
    const int size = 10;
    int arr[size]{1,2,3,4,5,6,7,8,9,10};
    show_arr(arr,size);
    cout<<"Итоговый массив : \n";
    Swap_Array(arr, arr + 10);
    show_arr(arr,size);
   
    
    //Задача 2. Возводим в степень, используя указатель
    cout<<"\nЗадача 2.\nВведите значение переменной : ";
    int n,m;
    cin>>n;
    cout<<"Введите число (показатель степени): ";
    cin>>m;
    cout<<"Итоговое значение : ";
    func(&n,m);
    cout<<endl;
    
        return 0;
    }
    
    
    
   
