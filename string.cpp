#include<iostream>
using namespace std;

// reverse string
string reversestring(string a){
    
    int left = 0;
    int right = a.length() - 1;

    while(left < right){
        swap(a[left], a[right]);
        left++;
        right--;
    }

    return a;
}

// palindrome checker
void palindrome(string a){

    string rev = reversestring(a);

    if(a == rev){
        cout<<"String is palindrome"<<endl;
    }
    else{
        cout<<"String is not palindrome"<<endl;
    }
}

// count vowels and consonants
void count(string a){

    int vowels = 0;
    int consonants = 0;

    for(int i=0; i<a.length(); i++){

        char ch = a[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowels++;
        }
        else{
            consonants++;
        }
    }

    cout<<"Vowels in the string: "<<vowels<<endl;
    cout<<"Consonants in the string: "<<consonants<<endl;
}

int main(){

    string name = "madam";

    int n = name.length();
    cout<<"Length Of string is: "<<n<<endl;

    string rev = reversestring(name);
    cout<<"Reverse String is: "<<rev<<endl;

    palindrome(name);

    count(name);

    return 0;
}