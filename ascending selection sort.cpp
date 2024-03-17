#include<iostream>
using namespace std;
int main()
{
    int arr[50], tot, i, j, k, elem, index;
    cout<<"Masukkan Banyak Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: \n";
    for(i=0; i<tot; i++){
     cout<<"masukkan angka ke-"<<i<<" :";
        cin>>arr[i];
    }
    for(i=1; i<tot; i++)
    {
        elem = arr[i];
        if(elem<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = elem;
        cout<<"\nproses sorting "<<i<<": ";
        for(j=0; j<tot; j++)
            cout<<arr[j]<<"  ";
    }
    cout<<"\n\nHasil Akhir:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
