#include<iostream>
#include<string>
using namespace std;

bool checkpalindrom(int i , int j, string &str){
   while(i<j){
    if(str[i]==str[j])
        {
            i++;
            j--;
        }

        else{
            return false;
        }

        return true;}


}

int main()
{

    string str;
    cout<<"enter string to check for palindrom : "<<endl;
    cin>>str;
    cout<<endl;

    bool check = checkpalindrom(0,str.length()-1 ,str);
    if(check){
        cout<<"string is palindrom"<<endl;

    }
    else
        cout<<"string is not palindrom";
}
