#include<iostream>
using namespace std;

//stack:
//stack is a data structure which stores data in LIFO form (last in first out):
//there is no indexing allowed in stack.
//in stack most generic we have to deal with main three functions.
//1. .top()
//2. .push()
//3. .pop()

void ExplainStack()
{
    //decleration.
    stack<int>st;
    st.push(1)//{1}
    st.push(2)//{2,1}
    st.push(3)//{3,2,1}
    st.emplace(4)//{4,3,2,1}
    //accesing.
    cout<<st.top()//it will return top element of stack which is 4.
    st.pop();//{3,2,1} 4 is poped out.
    cout<<st.size();//3
    cout<<st.emplty();//false.
    //swaping.
    stack<int>st1,st2;
    st1.swap(st1);
    
}

//queue:
//queue is is data structure which stores data in FIFO manner.(first in first out).
void Explin_queue()
{
    queue<int>q;
    q.push(2);//{2}
    q.push(3);//{2,3}
    q.push(4);//{2,3,4}
    q.push(5);//{2,3,4,5}
    q.back();//{5}
    q.back()+=8;//it means last element which is 5 and add 8 == 5+8 =13;
    cout<<q.back;//13
    cout<<q.front();//{2}
    q.pop();
    //size swap empty is similer as stack.

}

//preority queue:
//it is not a linear data structure.
//inside it a tree is maintained.
//it will store data sequentially means if u want to store 2 in.
//then 2 will store above 1 and bellow 3.

void Explian_priority_queue()
{
    priority_queue<int>pq;
    pq.push(1);//{1}
    pq.push(2);//{1,2}
    pq.push(5);//{1,2,5}
    pq.push(3);//{1,2,3,5}
    cout<<pq.top();
    pq..pop();

    //miminum heap.
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.push(01);//{01.2,5,8}
    cout<<pq.top();
}



int main()
{

}