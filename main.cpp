/*fizz buzz rules:
if numbmer is divisible by 5 print fizz
if number contains 5 print fizz
if number is divisible by 7 print buzz
if number contains 7 print buzz
for numbers divisible by both 5 and 7 print fizz buzz
 */




#include <iostream>
using namespace std;

//method 1: brute force method any number of lines goes
void fizzbuzz() {
    for (int i = 1; i <= 100; i++)
    {
        if(i % 5 == 0 && (i / 10 == 5 || i % 10 == 5)){
            cout << "fizz fizz ";
        }
        else if (i % 5 == 0)
        {
            cout << "fizz ";
        }
        else if(i % 7 == 0 && (i /10 == 7 || i % 10 == 7))
        {
            cout << "buzz buzz " << " ";
        }
        else if(i % 7 == 0)
        {
           cout<< "buzz ";
        }
        else if(i % 5 == 0 && i % 7 == 0 )
        {
            cout << "fizzbuzz ";
        }
        else
        {
            cout << i << " ";
        }

    }
    cout << endl;
}

//method 2: without a loop using a class and a public function
//rules for fizz buzz 2: divisible by 5 print fizz,
//divisible by 7 print buzz, divisible by both print fizz buzz

int i = 0;
class fizzbuzz2
{
public:
    fizzbuzz2()
    {
        i++;
        if(i % 15 == 0) { cout << "fizzbuzz ";}
        else if (i % 5 == 0) { cout << "fizz ";}
        else if (i % 7 == 0) { cout << "buzz ";}
        else {cout << i << " ";}
    }

};


int main() {
    fizzbuzz();
    fizzbuzz2 numbers[100];
    return 0;
}