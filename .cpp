#include <iostream>

using namespace std;
class rose
{
    public:
    int n,i,j,arr[30],item,mid,low,high,temp;
    int input();
    int bubble();
    int b_search();
};
int rose::input()
{
    cout<<"Enter how many array want to insert:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"array ["<<i<<"]:";
        cin>>arr[i];
    }
}
int rose::bubble()
{
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

 cout<<"sorted sequence is:"<<endl;

for(i=1;i<=n;i++)
{
    cout<<"array["<<i<<"]:"<<arr[i]<<endl;
}

return 0;
}
int rose::b_search(){
 low=1;
high=n;
mid=(low+high)/2;
cout<<"enter item want to search:";
cin>>item;
for(i=1;i<=n;i++)
{
    if(arr[mid]>item)
        high=mid-1;
    else
        low=mid+1;
    mid=(low+high)/2;
}
if(arr[mid]==item)
cout<<mid <<" is the position of item "<<endl;
else
cout<<"item is not found.."<<endl;
return 0;
}
int main()
{
   rose b;
   b.input();
   b.bubble();
   b.b_search();
}
