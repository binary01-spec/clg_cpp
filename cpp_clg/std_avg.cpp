#include<iostream>
#include<cstring>
using namespace std;
void average(float avg);

int main()
{
    float marks[5], avg = 0; 
    cout << "enter the marks : " << endl;
    for(int i = 0; i < 5; i++){
        cin >> marks[i];
        avg += marks[i];
    }
    avg = avg/5;
    average(avg);
    return 0;
}


void average(float avg){
    if(avg < 50){
        cout << "FAIL"<< endl;
    }
    else if(avg <= 60){
        cout << "C grade" <<endl;
    }
    else if (avg <= 70)
    {
        cout << "B grade" << endl;
    }
    else if (avg <= 80)
    {
        cout << "B+ grade" << endl;
    }
    else if (avg <= 90)
    {
        cout << "A grade" << endl;
    }
    else if (avg <= 100)
    {
        cout << "A+ grade" << endl;
    }
   
}
