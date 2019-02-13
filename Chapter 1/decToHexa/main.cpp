//program to show how to convert a decimal number to dexadecimal
#include <iostream>

using namespace std;

//prototype
void decToHexa(int n);

int main()
{
    int numToConvert1 = 128;
    int numToConvert2 = 15;
    int numToConvert3 = 16;
    int numToConvert4 = 3456;

    decToHexa(numToConvert1);
    decToHexa(numToConvert2);
    decToHexa(numToConvert3);
    decToHexa(numToConvert4);
    return 0;
}

void decToHexa(int n)
{
    //char array to store hexadecimal number
    char hexdeciamlArr[100];

    int i = 0;
    while(n != 0)
    {
        //temp variable to store remaninder
        int temp = 0;

        //store the reminader in a remp varialbe

        //we use 16 because their are only 16 base vaules to work from
        temp = n % 16;

        //check if temp < 10, for the purpose of checking if were going to need
        //a letter or numver digit  like 9 or 6
        if(temp < 10)
        {
            hexdeciamlArr[i] = temp + 48;
            i++;
        }else
        {
            hexdeciamlArr[i] = temp + 55;
            i++;
        }
        n = n/16;

    }
    //print out arrary in reverse
    for(int j = i -1; j >= 0; j-- ) cout << hexdeciamlArr[j];

    cout << endl;
}
