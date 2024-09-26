#include <iostream>
#include <cstdlib>

int GetDeterminant(){
    int length;
    std::cout<<"Enter the matrix order: ";
    std::cin>>length;
    double mtx[length*length];
    std::cout<<"(You can use the space bar to separate elements)"<<"\n";
    for(int i = 0;i<length;++i){
        std::cout<<"Enter the elements of the "<<i+1<<" string of the matrix:"<<"\n";
        for(int t = 0;t<length;++t){
            std::cin>>mtx[i*length+t];
            }
        
    }
    for(int g = 0; g<length-1;++g){
        double cur = mtx[g*length+g];
        for(int str = g+1;str<length;++str){
            double cf = (mtx[(str)*length+g]/cur);
            for(int stl = 0;stl<length;++stl){
                mtx[(str)*length + stl] = mtx[(str)*length + stl] - mtx[(g)*length + stl]*cf;
            }
        }
    }
    double det = 1;
    for(int d = 0; d<length;++d){
        det*=mtx[d*length+d];
    }
    std::cout<<"The determinant for the input matrix is: "<<det<<"\n";
    return det;
}

int main(){
    GetDeterminant();
    system("pause>nul");
    return 0;
}