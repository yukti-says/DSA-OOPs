#include<iostream>
#include<string>
using namespace std;

void stringreverse(int i , int j, string &str){
    cout<<"call recursive for: "<< str<<endl;
    //base case
if (i>j)
    return ;


swap(str[i],str[j]);
i++;
j--;
stringreverse(i , j , str);
}

int main()
{

    string str = "yukti sahu";
    cout<<"before reverse: "<<str<<endl;
    cout<<endl;
    stringreverse(0,str.length()-1 ,str);
    cout<<endl;
    cout<<"after reverse: "<<str;
}
