#include<bits/stdc++.h>
using namespace std;
class queue{
    int front;
    int rear;
    int count;
    int *arr;
    int MAX_SIZE;
public:
    queue(int size){
        MAX_SIZE=size;
        front=0;
        rear=MAX_SIZE-1;
        count=0;
        arr=new int[MAX_SIZE];
    }
