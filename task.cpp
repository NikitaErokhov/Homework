/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

                            Домашнее задание на 21_09_24
                            Выполнил Ерохов Никита М.
                            
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include <iostream>
void PrintTriangle(int high) {
	std::string strings[high];
	int index = 0;
	for(int i = 1; i<=high; i++) {
		std::string str = "";
		for (int j=1; j<=i; j++) {
			str = '*'+str  ;
		}
		strings[index] = str;
		index++;
	}
	for (int i = 0; i<high;i=i+1){
	    std::cout<<strings[i]<<std::endl;
	}
	
	for (int k = high-2; k>=0 ;){
	    std::cout<<strings[k]<<std::endl;
	    k = k-1;
	}


}
int main()
{
    unsigned int high;
	std::cout<<"Введите высоту треугольника: "<<std::endl;
	std::cin>>high;
	PrintTriangle(high);
	
	return 0;
}