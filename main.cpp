#include<iostream>
using namespace std;
int main()
{
    int n,choice=1;
    while(choice!=0)
    {
    int x;
    cout<<"Enter number for pattern of your choice"<<endl<<"1. Simple pyramid"<<endl<<"2. Flipped simple pyramid"<<endl<<"3. Inverted pyramid"<<endl;
    cout<<"4. Flipped inverted pyramid"<<endl<<"5. Triangle"<<endl<<"6. Inverted triangle"<<endl<<"7. Half diamond pattern"<<endl;
    cout<<"8. Flipped half diamond pattern"<<endl<<"9. Diamond pattern"<<endl<<"10. Hourglass pattern"<<endl<<"11. Number pyramid"<<endl;
    cout<<"12. Rotated number pyramid"<<endl<<"13. Palindrome triangle"<<endl<<"14. Alphabet pyramid"<<endl<<"15. Continuous alphabet pyramid"<<endl;
    cin>>x;
    cout<<"Enter desired size of pattern: ";
    cin>>n;
    switch(x){
case 1:
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    }break;

case 2:
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    }
break;

case 3:
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    }break;

case 4:
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    }break;
case 5:{
    int k=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=k)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        k--;
        cout<<endl;
    }
    }break;

    case 6:
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
        for(int x=0;x<k;x++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-k;j++)
        {
            cout<<"* ";
        }
        k++;
        cout<<endl;
    }
}break;

    case 7:
        {
    int k=0;
    for(int i=1;i<=(2*n)-1;i++)
    {
        if(i%2==0)
        {
            cout<<"  ";
        }
        if(i%2!=0 && i<=n)
        {
            k++;
        }
        if(i%2==0 && i>n)
        {
            k--;
        }
        for(int j=1;j<=k;j++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
        }break;

    case 8:
        {
    int x=0,k=n;
    for(int i=1;i<=(2*n-1);i++)
    {
        if(i%2!=0 && i<=n)
        {
            x++;
        }
        if(i%2==0 && i>n)
        {
            x--;
        }
        if(i<=n)
        {
            k--;
        }
        else
        {
            k++;
        }
        for(int j=1;j<=k;j++)
        {
            cout<<"  ";
        }
        for(int l=1;l<=x;l++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
        }break;

    case 9:
        {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        }break;
case 10:{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=n-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        }break;

case 11:{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
        }break;

case 12:{
    for(int i=1;i<=n;i++)
    {
        int count=i;
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
        }break;
case 13:{

    for(int i=1;i<=n;i++)
    {
        int count=i;
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<count++<<" ";
        }
        count--;

            for(int m=1;m<=i-1;m++)
            {

                cout<<--count<<" ";
            }
            for(int m=1;m<=i-1;m++)
            {
                count++;
            }
            count++;
        cout<<endl;

    }
        }break;
    case 14:
        {
    char a=65;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
        }
        a++;
        cout<<endl;
    }
        }break;
    case 15:
{
    char a=65;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    }break;
    }
    cout<<"Enter 1 to continue 0 to exit: ";
    cin>>choice;
    }
    return 0;

}
