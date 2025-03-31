#include<iostream>
#include<string>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

string stringreverse(int i , int j, string str){
    cout<<"call recursive for: "<< str<<endl;
    //base case
if (i>j)
    return str;


swap(str[i],str[j]);
i++;
j--;
stringreverse(i , j , str);
return str;
}

int main()
{
     string str;
    cout<<"enter string to check for palindrom : "<<endl;
    cin>>str;
    cout<<endl;

    string str2 = stringreverse(0,str.length()-1 ,str);
    if(str ==str2)
        cout<<"string is palindrom"<<endl;
    else
        cout<<"string is not palindrom";

}
