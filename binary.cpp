# include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first = 0;
    int last = n-1;
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            first = mid+1;
        }
        else
        {
            last =mid-1;
        }

        }
        return(-1);
    }
    int main()
    {
        int n,x;
        int a[10];
        cout<<"Enter the size of array";
        cin>>n;
        cout<<"Enter"<<n<<"sorted integers:\n";
        for(int i = 0; i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the target element to search be search=";
        cin>>x;
        int position=binary_search(a,n,x);
        if(position !=-1)
        cout<<"Element found at position:"<<position<<endl;

        else
         cout<<"Element not found."<<endl;

        return 0;
    }/*PS D:\harshada160> cd "d:\harshada160\" ; if ($?) { g++ binary.cpp -o binary } ; if ($?) { .\binary }
Enter the size of array5
Enter5sorted integers:
1 2 3  4 5
Enter the target element to search be search=4
Element found at position:3
PS D:\harshada160> 
    */

