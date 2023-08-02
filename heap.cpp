#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        //constructor just in case to intialize 0th index with -1
        arr[0] = -1;
        size = 0;
    }

    //inserting a new element into the array
    void insert(int val){
        size = size + 1; //giving the position at which the element is to be inserted
        int index = size;
        arr[index] = val;
        
        //checking wheather the element inserted is smaller than its root node
        while(index > 1){
            int parent = index/2; //calculating root node of element for every iteration

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);//if condiion swap the values
                index =parent;
            }
            else{
                return ; //if the condtion is satissfied exit the loop
            }
        } 
    }

    void deletefromHeap(){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
            return ;
        }

        arr[1] = arr[size]; //copying the last element as the root element and deleting the last element
        size--;

        //take root node to its correct position
        int i =1;
        while(i<size){
            int leftIndex = 2 * i; //maths to get left index
            int rightIndex = ( 2 * i )+ 1; //math to get right index

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i=1; i<=size ;i++){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
    }

};

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr, n ,largest);
    }
}

void heapSort(int arr[],int n){

    int size = n;
    while(size > 1){
        //step 1: swap
        swap(arr[size],arr[1]);
        size--;

        //step 2
        heapify(arr,size,1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deletefromHeap();
    h.print();

    int arr[6]={-1,4,1,3,9,7};
    int n = 5; 
    for(int i = n/2; i>0 ;i--){
        heapify(arr,n+1,i);
    }
    cout<<"printing the array now"<<endl;
    for(int i=1; i <= n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //heap sor fucntion called
    heapSort(arr,n);
    cout<<"printing the array now"<<endl;
    for(int i=1; i <= n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}