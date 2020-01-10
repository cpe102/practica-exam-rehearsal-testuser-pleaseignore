#include<iostream>
#include<string>

using namespace std;

int main(){
float num;
float sum=0;
while (num != 0){
    cout << "Enter X:  ";
    cin >> num;
    if (num>0) {sum = sum + num;}
    else {sum = sum + 0;}
    }
    sum = sum - num;
    
cout << "sum = "<<sum;
    return 0;
}
