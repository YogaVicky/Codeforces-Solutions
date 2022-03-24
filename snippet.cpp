/*


AUTHOR -: MAYANK RAWAL (GOD LYNX)
PUBLISHER -: MAYANK RAWAL (GOD LYNX)

FUCK THE RATINGS I AM HERE TO JUST GAIN KNOWLEGDE

*/


#include <bits/stdc++.h>

// For ordered_set
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#define MOD                         /--------------------------------------------->/  1000000007
#define testcases                   /--------------------------------------------->/            \
                                                                                         int t;    \
                                                                                         cin >> t; \
                                                                                         while (t--)

#define memst(arr, val)             /--------------------------------------------->/  memset(arr, val, sizeof(arr))
#define fori(i, a, b)                /--------------------------------------------->/  for (int i = a; i < b; i++)
#define forrev(i, a, b)             /--------------------------------------------->/  for (int i = a; i >= b; i--)
#define forstep(i, a, b, step)      /--------------------------------------------->/  for (int i = a; i < b; i += step)
#define forrevstep(i, a, b, step)   /--------------------------------------------->/  for (int i = a; i >= b; i -= step)
#define ull                         /--------------------------------------------->/  unsigned long long int
#define ll                          /--------------------------------------------->/  long long int
#define P                           /--------------------------------------------->/  pair
#define pll                         /--------------------------------------------->/  pair<long long, long long>
#define pii                         /--------------------------------------------->/  pair<int, int>
#define puu                         /--------------------------------------------->/  pair<unsigned long long int, unsigned long long int>
#define l                           /--------------------------------------------->/  list
#define vi                          /--------------------------------------------->/  vector
#define d                           /--------------------------------------------->/  deque
#define sett                        /--------------------------------------------->/  set
#define mset                        /--------------------------------------------->/  multiset
#define mpp                         /--------------------------------------------->/  map
#define unmpp                       /--------------------------------------------->/  unordered_map
#define mp                          /--------------------------------------------->/  make_pair
#define pb                          /--------------------------------------------->/  push_back
#define pf                          /--------------------------------------------->/  push_front
#define multimpp                    /--------------------------------------------->/  multimap
#define f                           /--------------------------------------------->/  first
#define s                           /--------------------------------------------->/  second
#define it                          /--------------------------------------------->/  iterator
#define revit                       /--------------------------------------------->/  reverse_iterator
#define tourist                                                                                                           \
                                    /--------------------------------------------->/  ios_base::sync_with_stdio(false); \
                                    /--------------------------------------------->/  cin.tie();                        \
                                    /--------------------------------------------->/  cout.tie();
#define FILE_READ_IN                /--------------------------------------------->/  freopen("input.txt", "r", stdin);
#define FILE_READ_OUT               /--------------------------------------------->/  freopen("output.txt", "w", stdout);
#define all(a)                      /--------------------------------------------->/  a.begin(), a.end()
#define ld                          /--------------------------------------------->/  long double
#define decimalpoints(x)            /--------------------------------------------->/  cout << setprecision(x) << fixed;



#define     gcd(a, b)         __gcd(a,b)
#define     min3(a,b,c)       min(a,min(b,c))
#define     max3(a,b,c)       max(a,max(b,c))
#define     lcm(a, b)         ((a)*(b)/gcd(a,b))
#define     min4(a,b,c,d)     min(d,min(a,min(b,c)))
#define     max4(a,b,c,d)     max(d,max(a,max(b,c)))
#define     input             freopen("input.txt","rt", stdin)
#define     output            freopen("output.txt","wt", stdout)



#define     EPS               10E-10
#define     mxx               100005
#define     MOD               1000000007
#define     iseq(a,b)         (fabs(a-b)<EPS)
#define     PI                3.141592653589793238462643

using namespace std;
 
const ll /------->/  maxn = 1e5;
const ll /------->/  inf = 1e9;

//************* IMPORTANT FUNCTIONS THAT CAN BE USED WITHIN A CONTEST **************//

// FUNCTION - 1 // 
void rooksinchess(){
    int n ,k;
cin>>n>>k;

int notprint = ceil((double)n/2);

   if(k> notprint) {
    cout<<"-1"<<endl;
    return;
    
}
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i==j && k>0  && i%2==0){
                if(i%2==0){
                    cout<<"R";
                    k--;
                }
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }
}



// FUNCTION - 2 //
bool is_vowel(char c)
{
	return (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u');
}


// FUNCTION - 3 //
int Binary_gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}


// FUNCTINO - 4 (FAST GCD, EVEN FOR NEGATIVE NUMBERS)  [RECURSIVE METHOD]
// int modular_recursive_gcd(int a, int b, int& x, int& y) {
//     if (b == 0) {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     int x1, y1;
//     int d = gcd(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a / b);
//     return d;
// }


//  FUNCTINO - 5 (FAST GCD, EVEN FOR NEGATIVE NUMBERS)  [ITERATIVE  METHOD]  //
int modular_iterative_gcd(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}


// FUNCTION - 6 (MAKE EVERY ROW AND COLOUMN SUM EQUAL TO A INTEGER K)--> HAVING N ROWS AND N COLUMNS
void row_and_col_sum_is_equal(){
     int n ,k;
    cin>>n>>k;
   for( int i = 1; i <= n; i ++ )
    {
        for( int j = 1; j <= n; j ++ )
        {
            if( i == j )cout << k << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}




// **********THESE FUNCTIONS ARE IMPLEMENTED BY NONE ANOTHER THAN MAYANK RAWAL aka GOD_LYNX ***********//
void solveformyself(){


}

int main()
{
    tourist
    testcases{

    solveformyself();

    
    
 }
    return 0;
}






/*---------------------------------------------------Vector STL/Function----------------------------------------------------------
 * vlli v2(v.begin(),v.begin()+size);
 * vlli v2(v)
 * sort(v.begin().v.end())
 * reverse(v.begin(),v.end())
 * (bool) binary_search(v.begin(),v.end(),key)
 * (iterator) lower_bound(v.begin(),v.end(),key);
 * (iterator) upper_bound(v.bein(),v.end(),key);
 * (iterator) v.lower_bound(key);
 * (iterator) v.upper_bound(key);
 * v.erase(v.begin()+i)
 * v.erase(unique(v.begin(),v.end()),v.end())
 * v.erase(v.begin()+i,v.end()-j)  ||    v.erase(v.begin(),v.begin()+j)
 * v.erase(remove(v.begin(),v.end(),data),v.end())  //erase  all the 'data' from the vector
 * (bool)next_premutation(v.begin(),v.end())
 * (bool)prev_premutation(v.begin(),v.end())
 * v.insert(it,data) || v.insert(i,data)
 * v.insert(it,no_of_times,data) || v.insert(i,no_of_times,data)
 *
 * v.push_back(data),v.pop_back(data),(data) v.front() ,(data) v.back() ,(data) v[index] ,(iterator) v.begin() ,(iterator) v.end()
 * (lli) max_e(v) ,(lli)min_e(v) ,lli fmax_i(v) ,lli lmax_i(v) ,lli fmin_i(v) ,lli lmin_i(v)
 */

/*--------------------------------------------------Vector of pairs----------------------------------------------------------------
 * vector<pair<key_type,data type>> vp
 * vp.push_back(make_pair(key,data))
 *
 * sort by key/first element (then data/second)
 * sort(vp.begin(),vp.end())
 *
 * sort by sec element(only by sec)
 * bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
 * {
 *       return (a.second < b.second);
 * }
 * sort(vp.begin(),vp.end(),sortbysec)
 *
 * (data) vp[i].first ,(data) vp[i].second ,
 */

/*----------------------------------------------String Manupulation -------------------------------------------------------------
 * string str2(str1)
 * string str2(str1.begin(),str1.begin()+length)
 * string s=str.substr(starting_index,length)
 * s.erase(s.begin()+index)
 * s.erase(s.begin()+index,s.end()-index)  ||  s.erase(s.begin()+index(),s.begin()+index)
 * s.erase(unique(s.begin(),s.end()),s.end())  ::adjecent will not be same
 * sort(s.begin(),s.end());
 * reverse(s.begin(),s.end())
 * str.erase(remove(str.begin(),str.end(),'ch'),str.end()); //erase all the 'ch' from string
 * str.insert(it,'ch')  ||  str.insert(i,'ch')
 * str.insert(it,no_of_times,'ch') ||  str.insert(i,no_of_times,'ch')
 *
 * getline(cin,string_name)
 * stringstream(string_name)>>type1_>>type2_>>type3_.........>>typeN_;
 * stringstream STREAM_name(string_name)
 * STREAM_name>>type1_>>type2_>>type3>>type4_>>type5_;
 * s=to_string(2018)
 */

/* -------------------------------------------------STACK------------------------------------------
 * stack<data_type>s
 * push()              :s.push(data)           :O(1)
 * pop()               :s.pop()                :O(1)
 * top()               :s.top()                :O(1)
 * empty()             :s.empty()              :O(1)
 * size()              :s.size()               :O(1)
 */

/* -------------------------------------------------QUEUE------------------------------------------
 * queue<data_type>q
 * push()               :q.push(data)          :O(1)
 * pop()                :q.pop()               :O(1)
 * front()              :q.front()             :O(1)
 * back()               :q.back()              :O(1)
 * empty()              :q.empty()             :O(1)
 * size()               :q.size()              :O(1)
 */

/*------------------------------------------ priority_queue(default MAX HEAP)-------------------------------
 * priority_queue(data_type>pq
 * push()               :pq.push(data)         :O(log(n))
 * pop()                :pq.pop()              :O(long(n))
 * top()                :pq.top()              :O(1)
 * size()               :pq.size()             :O(1)
 * empty()              :pq.empty()            :O(1)
 */

/-------------------------------SET:Element in sorted order(increasing) and UNIQUE**----------------------
 * declaration     :set<lli>s
 * insertion       :s.insert(data)  //insert if it is not present     :O(log(n))
 * size            :s.size()                                          :O(1)
 * find            :auto it=s.find(data) //if it!=s.end -> data found :O(log(n))
 * s.lower_bound() :it=s.lower_bound(data)
 * s.upper_bound() :it=s.upper_bound(data)
 * lower_bound()   :it=lower_bound(s.begin(),s.end(),data)
 * upper_bound()   :it=upper_bound(s.begin(),s.end(),data)
 * erase()         :erase(it)
 * erase()         :s.erase(it1,it2)
 * s.erase()       :s.erase(data)
 * loop            :for(auto it=s.begin();it!=s.end();it++)
 */

/*------------------------------------------MAP:Elemnet r SORTED,unlike set we insert (key and data)--------------------------
 * declaration   :map<key_type,data_type>m
 * insert        :m.insert(make_pair(key,data));                     :O(log(n))
 *               :m.insert(pair<type,type>(key,data))
 * find          :auto it=m.find(key) //if(it!=m.end)it->first=key   :O(log(n))
 * []            :m[key]++      //data=data+1 ,at that key           :O(log(n))
 * size          :m.size()                                           :O(1)
 * m.lower_bound :it=m.lower_bound(key)
 * m.upper_bound :it=m.lower_bound(key)
 * lower_bound   :it=lower_bound(m.begin(),m.end(),key)
 * upper_bound   :it=upper_bound(m.begin(),m.end(),key)
 * erase()       :s.erase(it)
 *               :s.erase(it1,it2)
 *               :s.erase(key)
 * loop          :for(auto it=m.begin();it!=s.end();it++)
 *
 * it->first ,it->second ,
 */

/*------------------------------------------Unorderd SET  :Elements in unsorted order(used hasing to store data)------------------------------------
 * declaration   :unordered_set<lli>s
 * insertion     :s.insert(data)                                     :O(1)
 * size          :s.size()                                           :O(1)
 * find          :auto it=s.find(data)//if it!=s.end ->data found    :O(1)     ||  worst case O(n)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */

/*Unordered MAP :Element r UNSORTED,unlike unordered set we insert (key and data)||
 * declaration   :unorderd_map<key_type,data_type> m
 * insert        :insert(make_pair(key,data))                        :O(1)
 * find          :auto it=m.find(key) //if (it!=m.end)it->first=key  :O(1)
 * []            :m[key]++      //data=data+1 ,at that key           :O(1)
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */

/* muti_set             :similar to set but have duplicate element
 * multi_set<data_type>ms
 * insert()               :ms.insert(data)         :O(log(n))
 * find()                 :auto it=ms.find(data)   :O(long(n))
 * size()                 :ms.size()               :O(1)
 */

/* multimap              :similar to MAP but can have duplicate keys  :search O(logn):insert O(logn):delete O(logn)
 * mulimap<key_type,data_type>mm
 * mm.insert(pair<key_type,data_type>(key,data))        :O(long(n))
 * multimap<key_type,data_type> mm2(mm.begin(),mm.end())
 * find()                :it=mm.find(key)  //first it   :O(long(n))
 * mm.lower_bound(key)->second //data      mm.lower_bound(key)=it  1st elemet having the key  or mm.end()
 * mm.upper_bound(key)->second //data      mm.upper_bound(key)=it  1st element just after the key or mm.end()
 * mm.erase(key)         :erase all element of the key value
 * mm.erase(mm.begin(),mm.find(key))    :remove all having(key) less than the given key
 * mm.size()                                             :O(1)
 * for(auto it=mm.begin();it!=mm.end;it++)     :traversal
 */
/__________________________________________________/

// If you want to just put all the worlds of a paragraph in database use VECTOR
// If you want to make dictionary of the words in paragraph use SET
// If you want to calculate frequency of each words in paragraph use MAP

/__________________________________________________/

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * boundary cases
 * do something instead of nothing and stay organized.
 * BELIEVE in yourself.
 */
/* some basic stuff that you should learn:
        * Sets : Unique element container.
            * set<int,greater<int> > s; // to order the set in descending order
            * To check if an element is in a set : s.count(x)  || s.find(x)!=s.end()
            * begin() - returns an iterator to first element of set. The value of the element can be accessed using *(s.begin())
            * end() - Returns an iterator to the theoretical element that follows last element in the set.
            * size() - Returns the number of elements in the set.
            * max_size() - Returns the maximum number of elements that the set can hold.
            * empty() - Returns whether the set is empty.
            * find(x) - Returns an iterator to the element ‘x’ in the set if found, else returns the iterator to end.
            * erase(x)– Removes the value ‘x’ from the set. It erases an element by value
            * count(x) - Returns 1 or 0 based on the element ‘x’ is present in the set or not. It's the best way to check for the presence of an element.
            * lower_bound(x) – Returns an iterator to the first element that is equivalent to ‘x’ or definitely will not go before the element ‘x’ in the set.
              lower_bound can also be thought as the smallest element greater than or equal to x
            * Return reverse iterator to reverse beginning: (s.rbegin())
            * Set to be sorted in decreasing order: set<int, greater<int> >
            * emplace() : If the function successfully inserts the element (because no
                    equivalent element existed already in the set), the function returns a
                    pair of an iterator to the newly inserted element and a value of true.
            * const bool is_in = s.find(x) != s.end(); check if an element is in the set.
            * myset.erase(x) #directly by value. logarithmic complexity
            * myset.erase(iteratortoanelement,s.end())
            * for_each(all(s),do_something);
            * set<int> :: iterator it = myset.find(60);

        * Vectors
            vector<int> v; v.resize(n,0); // resizes the vector and initializes it too.
            front(), back(), push_back(), pop_back()
            * begin() - Returns an iterator pointing to the first element in the vector
            * end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector
            * rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning).
            * rend() - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
            * cbegin(),cend(),crbegin(),crend()
            * size() - Returns the number of elements in the vector.
            * max_size() -  Returns the maximum number of elements that the vector can hold.
            * capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements.
            * resize() - Resizes the container so that it contains ‘n’ elements.
            * empty() - Returns whether the container is empty.
            * shrink_to_fit() - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
            * reserve() - Requests that the vector capacity be at least enough to contain n elements.
            * [i] - Returns a reference to the element at position ‘i’ in the vector
            * at(i) - Returns a reference to the element at position ‘i’ in the vector
            * front() - Returns a reference to the first element in the vector
            * back() - Returns a reference to the last element in the vector
            * data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
            * assign() - It assigns new value to the vector elements by replacing old ones
            * push_back() - It push the elements into a vector from the back
            * pop_back() - It is used to pop or remove elements from a vector from the back.
            * insert() - It inserts new elements before the element at the specified position
            * erase() - It is used to remove elements from a container from the specified position or range
            * swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
            * clear() - It is used to remove all the elements of the vector container
            * emplace() - It extends the container by inserting new element at position
            * emplace_back() - It is used to insert a new element into the vector container, the new element is added to the end of the vector
            * for (auto it = myvector.begin(); it != myvector.end(); ++it)

        * Queue
            * empty() - Returns whether the queue is empty.
            * size() - Returns the size of the queue.
            * emplace() - Insert a new element into the queue container, the new element is added to the end of the queue.
            * front() - front() function returns a reference to the first element of the queue.
            * back() - returns a reference to the last element of the queue.
            * push(x) - adds the element ‘x’ at the end of the queue
            * pop() - deletes the first element of the queue

        * Priority_Queue
            priority_queue <int, vector<int>, greater<int>> pq; // to make a priority queue in descending order
            * empty() - returns whether the queue is empty.
            * size() -  returns the size of the queue.
            * top() -  Returns a reference to the top most element of the queue
            * push(x) - adds the element ‘x’ at the end of the queue.
            * pop() -  deletes the first element of the queue.
            * swap() -  swap the contents of one priority queue with another priority queue of same type and size.
            * emplace() - insert a new element into the priority queue container, the new element is added to the top of the priority queue.

        * Deque
            Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
            They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
            Unlike vectors, contiguous storage allocation may not be guaranteed.
            * insert()
            * rbegin()
            * rend()
            * assign()
            * resize()
            * push_front()
            * push_back()
            * pop_front()
            * pop_back()
            * front()
            * back()
*/

/* main remembering points
1) switch statements cannot be applied on strings and float in c++
2) set method is slower than map to count unique numbers
3) we should either use vector or initialize our array =0 or for every structure we should iniialize them to 0
4) we should always check the base conditions first at every point of code to make simpler might be in terms of space allocation only.
5) to completely read the input of the stdin or console use getline(cin,string s) to get whole thing of the line this helps in identifying that the end of line has came
6) The second way to initialize is to use fill other than memset.
7) Never use memset(,,n*sizeof(ll)) since ll is a macro and not a variable.
8) The main idea see the link : https://codeforces.com/contest/1475/problem/D This tolds how to divide array based on value and how to use it .'
9) Sometimes we need to use the element of the array as our indices for the array to store their count.
10) Sometimes it is necessary to precalculate some details like square to find roots, best example includes the below one:
    for(int i=1;i<MAX_INT;++i){dp[i]=dp[i-sum0fdigits(i)]+1;} Here dp represents the count of times require to make a number 0 by subtracting itself form its digitsum each time.
11) see imp question from codeforces to count pairs with some logic in question given was arr[i]-arr[j]==i-j see it in this way as arr[i]--==arr[j]-j and we should add 1+2+3..  to find the count of pair.
12) see this question a good use of https://codeforces.com/contest/1520/problem/F2 map and binary search and one critical idea,
13) somethimes the middle element is only an optimal solution to move.
14) The method to take the prime factors of any number if is like this
        for(int i=2;i*i<n;++i){if(n%i==0){while(n%i==0)n/=i;v.push_back(i)}}
    Then there might be a case at last that n>1 and is a prime too which we had not checked.
    So please don't forget about it.
15) We can do binary search or any operations easily as shown:
        while(l<r){//operations}
        if(l==r){//left case}
16) We can try to convert any number to other numbers base and solve the question see the sample::https://codeforces.com/contest/552/problem/C
17) see the Codechef's long challenges may 2021 for more interesting maths questions.
18) https://www.geeksforgeeks.org/sum-xor-possible-subsets/ This is a very good application of ideas and a basic question
19)https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/discuss/1219312/c%2B%2B(0ms-100)-iterative-easy
Do check it out.
20) To find the gray code of a given number we can just do no^(no>>1) and to print its bits we can first find bitset of it and then convert that bitset to a string and find its substr(32-size of bits required);
21) consider a map as
map<int , int> m;
for(auto i = m.begin();i!=m.end()/* Don't write i<m.end();++i)
if((*i).second)//first way
if(i->second)//second way
see the difference between teh two;
22) we can copy all the elements of a map to a vector as shown
vector<pair<int,int>> ans(maps.begin(),maps.end());
23) To form gray codes we use val1 = i^(i>>1) bitset<32> val2(val) string ans = val2.to_string() for length n ans.substr(32-n);
24) for implementing half adder
add(int a.int b){
while(b!=0)
{
int carry = a&b;
a=a^b;
b=carry<<1;
}
return a;
}
25) front() in stl gives value of front element and begin() returns iterator
26) see the example of LRU implementation
27)https://codeforces.com/contest/1541/submission/120661353
important for if and out of bound and how to use and/or in if else block
28) I practiced one question which proves the property of Tournament graph on codeforces do check it.
link: https://codeforces.com/contest/1559/problem/C
29) cout << A[i] << " \n"[ i == n ]; trick for couting newline at end of loop;
30) in coin change if we use first approach we are using a same set of coin but with different permutation of coins in it.
for second we are using each set only once without its permutation.
f(i,1,sum+1){
    f(j,0,n){
        if(i>=a[j])
        dp1[i]+=dp1[i-a[j]];
    }
}

f(i,0,n){
    for(int j=a[i];j<=sum;++j){
        dp2[j]+=dp2[j-a[i]];
    }
}
31) Sum of digits (iteratively which will lead to only single digit) can be found without dp jus tin O(1)
as see this http://applet-magic.com/digitsummod9.htm
*/