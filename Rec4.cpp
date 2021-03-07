#include <iostream>
using namespace std;
int getDig(int);

int main()
{
    int input, total;
    cout<<"Input a number: ";
    cin>>input;
    total = getDig(input);
    cout << "Number of digits : " <<total;
    return 0;
} 
int getDig(int n){
    if (n == 0){
    	n += 0;
    }  else {
    return 1 + getDig(n / 10);
	}
}
 


