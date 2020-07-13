/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
    // Your Code
    q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    // Your Code   
    if(q1.empty()){
        return -1;
    }
    while(q1.size()!=1){            // This can also be solved using a single queue. 
        q2.push(q1.front());        // ->if q1.size() = n, loop for n-1 times -> pop and push in same queue.
        q1.pop();                   // store first value pop and return
    }
    
    int ans = q1.front();
    
    q1.pop();
    
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    
    return ans;
}

/*                                    // Implementation using a single queue.
int QueueStack :: pop()
{
    // Your Code   
    if(q1.empty()){
        return -1;
    }
    
    int n = q1.size();
    
    while(--n){
        q1.push(q1.front());
        q1.pop();
    }
    
    int ans = q1.front();
    
    q1.pop();
    
    
    return ans;
}
*/
