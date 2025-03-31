// in static memory allocation -> int a[2][3]
// in dynamic memory allocation -> int **a = new int *[n];

// 1D int *a = new int[n] so int type ke maultiple blocks then in above int type ke multiple arrays (raws))

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter number: "<<endl;
    cin>>n;

    //creation
    int **arr= new int *[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    cout<<"enter elements: "<<endl;
    //for input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;


    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

        for(int i=0;i<n;i++){
            delete [] arr[i];
     }
    }

     delete []arr;

/*
    // for different row and column

    int r;
    cout<<"enter row: "<<endl;
    cin>>r;

    int c;
    cout<<"enter column: "<<endl;
    cin>>c;

    //creation
    int **arr= new int *[r];
    for(int i=0;i<r;i++){
        arr[i] = new int[c];
    }
    cout<<"enter elements: "<<endl;
    //for input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;


    //print
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //free up memory
     for(int i=0;i<r;i++){
            delete [] arr[i];
     }

     delete []arr;
     */
}


