#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(3);
    pq.push(5);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
}