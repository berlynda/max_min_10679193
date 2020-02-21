#include <iostream>
using namespace std;

int linearSearch(int array[], int key, int size)
{
    size = size-1;
    if(size < 0)
        {
            return -1;
        }
    else if(array[size]==key)
    {
        return 1;
    }
    else
    {
        return linearSearch(array,key,size);
    }
}
int main()
{
    cout<<"Enter the array size : " ;
    int size;
    cin>>size;
    int array[size], key,i;

for(int j=0;j<size;j++)
{
    cout<< "Enter " << j <<" Element :";
    cin >>array[j];
}
for(int a=0;a<size;a++)
{
    cout<<"array[ "<<a<<"] = ";
    cout<<array[a]<<endl;
}
cout<<"Enter key to search in array";
cin>>key;
//int result;
//result=linearSearch(array,key,size--);
for(int j=0;j<size;j++){
if(array[j]==key)
{
    cout<< "Key found in array at index " << j <<endl;
    return j;
}
else
    {
    cout<<"Key not found in array " << endl;
    }
}
return 0;
}
