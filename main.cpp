#include <iostream>

using namespace std;

//7 Intercambiando valores ingresados por referencia
void inter(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    inter(a,b);
    cout << a << " "<< b;
    return 0;
}
