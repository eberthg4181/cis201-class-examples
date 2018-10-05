#include<iostream>
#include<string>

using namespace std;

string int_name(int n);

string digit(int n);
string teens(int n);
string tens(int n);

int main()
{
    //for(int i = 100;i<120;i+=1)
    //   cout << i << " = " << int_name(i) << endl;
    cout <<  int_name(10279) << endl;
    return 0;
}

string tens(int n)
{
    string value = "";
    if(n >= 90) value = "Ninety";
    else if(n >= 80) value = "Eighty";
    else if(n >= 70) value = "Seventy";
    else if(n >= 60) value = "Sixty";
    else if(n >= 50) value = "Fifty";
    else if(n >= 40) value = "Forty";
    else if(n >= 30) value = "Thirty";
    else if(n >= 20) value = "Twenty";
    else value = "Error";

    return value;
}

string teens(int n)
{
    string value="";
    switch(n) 
    {
        case 10: value = "Ten";break;
        case 11: value = "Eleven";break;
        case 12: value = "Twelve";break;
        case 13: value = "Thirteen";break;
        case 14: value = "Fourteen";break;
        case 15: value = "Fifteen";break;
        case 16: value = "Sixteen";break;
        case 17: value = "Seventeen";break;
        case 18: value = "Eighteen";break;
        case 19: value = "Nineteen";break;
        default: value = "Error";
    }
    return value;
}

string digit(int n)
{
    string value = "";

    if(n == 1) value = "One";
    else if(n == 2) value = "Two";
    else if(n == 3) value = "Three";
    else if(n == 4) value = "Four";
    else if(n == 5) value = "Five";
    else if(n == 6) value = "Six";
    else if(n == 7) value = "Seven";
    else if(n == 8) value = "Eight";
    else if(n == 9) value = "Nine";
    else value = "";

    return value; 
}

string int_name(int n) 
{
    int c = n; // The part that still needs to be converted string r;
    string r; // the return value

    if (c >= 1000) {
        int thousands = c / 1000;
        string thou_str  = "";
        if(thousands >= 100)
           thou_str = digit(thousands);
        else if(thousands >= 20)
           thou_str = tens(thousands);
        else if(thousands >= 10)
           thou_str = teens(thousands);
        else if(thousands > 0)
           thou_str = digit(thousands);
        r = thou_str + " Thousand "; 
        c = c % 1000;
    }
    if (c >= 100) {
        r = r + digit(c/100) + " Hundred"; 
        c = c % 100;
    }
    if (c >= 20) {
        r = r + " " + tens(c); 
        c = c % 10;
    }
    if (c >= 10) {
        r = r + " " + teens(c);
        c = 0;
    }
    if (c > 0) 
    {
      r = r + " " + digit(c);
    }
    return r;
}
