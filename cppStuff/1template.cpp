#include<iostream>

template<typename T>
void Print(T value){
    std::cout<<value<<std::endl;
}

template<typename T,int N>
class Array{
private:
    T m_array[N];
public:
    int GetSize() const { return N; }
};

int main(){
    Print<int>(5);
    Array<int, 5> array;    
    return 0;
}