#include<bits/stdc++.h>
using namespace std;

// pairs
void explainPair(){

    // pair of two numbers
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    // pair of multiple numbers
    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // pair array
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second << endl;
}

// vectors
void explainVector(){

    // initialize empty vector
    vector<int> v;

    // push_back 1
    v.push_back(1);
    v.emplace_back(2);

    // vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    // emplace back automatically assumes it to be a pair
    vec.emplace_back(1, 2);

    // vector of containing size 5 and only instances of 100
    vector<int> v(5, 100);

    vector<int> v1(5, 20);
    // copy of container
    vector<int, int>(v1);

    // itetrators

    // itrator pointing to first index
    vector<int>::iterator it = v.begin();
    // shift the memory
    it++;
    // access at updated index
    cout << *(it) << " ";

    // shift it by two poisitions
    it = it+2;
    cout << *(it) << " ";

    //itartor pointing to last
    vector<int>::iterator it = v.end();

    // reverse end
    // vector<int>::iterator it = v.rend();

    // reverse begin
    // vector<int>::iterator it = v.rbegin();

    // iterator loop
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    // auto assignation
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    // for each loop
    for(auto it: v){
        cout << it << " ";
    }

    // {10, 20, 12, 23}
    // deletion in vector
    // erase index 1 
    v.erase(v.begin() + 1);

    // erase mutltiple
    
    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);  // // {10, 20, 35}

    // insert function

    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    // copy entire position to another vector
    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // swap an element
    v.swap(copy);

    // erase the entire vector
    v.clear();
    // is vector empty
    cout << v.empty();


}

void explainList(){
    list<int> ls; 

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
}

void explainDeque(){

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.back();

    dq.front();
}

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2) ; // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.push(3); // {3, 3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5

    st.pop(); // {3, 3, 2, 1}
}

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}

    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}

    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2
}

void explainPQ(){

    // maximizer heap
    priority_queue<int> pq;
    
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    pq.pop(); // {8, 5, 2}
    cout << pq.top(); // prints 8

    // minimizer heap
    priority_queue<int, vector<int>, greater<int>> pq;
}

void explainSet(){
    // set stores everyhting sorted and unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    //{1, 2, 3, 4, 5}
    // returns a pointer
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    //  returns a pointer
    auto it = st.find(6);

    //  {1, 4, 5}
    st.erase(5); //erases 5

    // true or false
    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after, {1, 4, 5} [first, last)

}

void exalainMultiSet(){

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erased

    // count the number of ones in the multiset
    int cnt = ms.count(1);

    // only a single one erased
    // erases one address
    ms.erase(ms.find(1));
}

void explain_unordered_Set(){
    unordered_set<int> st;
    // all operations are O(1)
    // all functions similiar except for lower_bound/upper_bound
}



int main()
{
    // explainPair();


    
 
    return 0;
}