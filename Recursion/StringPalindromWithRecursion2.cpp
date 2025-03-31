#include<iostream>
using namespace std;

bool isplindrom(string str , int i ,int j){
  //base case
  if(i>j)
    return true;

  if(str[i] != str[j]){
    return false;
  }
  else

    return isplindrom(str, i+1, j-1);

}

int main()
{
    string str;
    cout<<"enter string to check for palindrom : "<<endl;
    cin>>str;
    cout<<endl;
    bool check = isplindrom(str , 0 ,str.length()-1);
    if(check)
        cout<<"string is palindrom"<<endl;
    else
        cout<<"string is not palindrom";
}
