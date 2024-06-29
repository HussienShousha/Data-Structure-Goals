#include <bits/stdc++.h>
using namespace std;
#define Shousha ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
template<class T>
class Monotonic_Queue {
private:
    queue<T> queue1;
    deque<T> deque1;
public:
    void push(T x) { // O(n)->amortized O(1)
        queue1.push(x);
        while ((!deque1.empty()) && x > deque1.back()) {
            deque1.pop_back();
        }
        deque1.push_back(x);
    }

    void pop() {//O(1)
        if ((!deque1.empty()) && queue1.front() == deque1.front())
            deque1.pop_front();
        queue1.pop();
    }

    T front() {//O(1)
        if (!queue1.empty())
            return queue1.front();
        return T();
    }

    T back() { //O(1)
        if (!queue1.empty())
            return queue1.back();
        return T();
    }

    T getMax() { //O(1)
        if (!deque1.empty())
            return deque1.front();
        return T();
    }


};
int main(){
    Shousha

    return 0;
}
