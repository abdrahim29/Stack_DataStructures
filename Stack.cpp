#include<iostream>
using namespace std;


class stack{

    private:
    int top;
    int array[5];
    

    public:
   
    stack(){
        top=-1;
        
        for (int i=0;i<5;i++){
            array[i]=0;
        }
    }
    bool isEmpty(){
        if (top==-1)
           
            return true;

        
        else
            return false;
        
    }

    bool isFull(){
        if (top==4)
            

            return true;

        
        else 
            return false;

    }

    void push(int v){
        if (isFull());

        else {
            top=top+1;
            array[top]=v;
        }

    }
    
    int pop(){
        

         if(isEmpty()){
            return 0;
         }
         else{
            int x=array[top];
            array[top]=0;
    
            top=top-1;
            return x;
    
            }

        
    }

    
    void print(){
        cout<<"[";
        for(int i=0;i<5;i++){

        
        cout<<array[i]<<",";
        }
        cout<<"]";

        
       
    }
    
    

};

int main()
{
    stack s1;
   
    cout<<"initial stack: "; s1.print();
    s1.push(5);
    s1.push(9);
    s1.push(15);
    s1.push(2);
    
    cout<<endl<<"stack with pushed elements: ";s1.print();
    cout<<endl<<"popped out element: "<<s1.pop();
    cout<<endl<<"popped out 2nd element: "<<s1.pop();


    cout<<endl<<"final stack"; s1.print();
    

   


    
    return 0;
}