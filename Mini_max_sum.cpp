#import<iostream>
#import<string>

using namespace std;



int main(){
    long input[5];
    long min, max;

    for (int i = 0; i < 5; i++){
        cin >> input[i];
    }

    min = max = 0;

    for (int i = 0; i < 5; i++){
        min = input[min] < input[i] ? min : i;      
        max = input[max] > input[i] ? max : i;      
    }

    long sumMin = 0, sumMax = 0;

    for (int i = 0; i < 5; i++){
        if (i != max) sumMin += input[i]; 
        if (i != min) sumMax += input[i]; 
    }

    cout << sumMax << " " << sumMin << endl;


}