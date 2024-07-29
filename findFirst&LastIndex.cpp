#include <iostream>
using namespace std;
void findIndex(int a[], int n, int key){
    int i = 0; 
    int j = n-1;
    int f1 = 0;
    int f2 = 0;
    while(i < j && (f1==0 || f2==0)){
        if(a[i] != key){
            i++;
        }
        else{
            f1=1;
        }
        if(a[j] != key){
            j--;
        }
        else{
            f2=1;
        }
    }
    if(i == j && a[i] == key){
        cout<<"one occurence at : "<<i;
    }
    else if(a[i] != key){
        cout<<"no element found";
        }
        else{
        cout<<"first occurence at: "<<i;
        cout<<"\nlast occurence at: "<<j;
    }
}
int main()
{
    int a[] = { 1, 2, 7, 2, 8, 2, 5, 8, 0, 8, 8};
    int n = sizeof(a) / sizeof(a[0]);

    // Key to find
    int key = 8;

    // Calling function
    findIndex(a, n, key);

    return 0;
}
