#include <bits/stdc++.h>
using namespace std;

vector<int> PrintDivisor(int n){
    vector<int> ls;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if(i!=n/i){
                ls.push_back(n/i);
            }
        }

    }
    sort(ls.begin(),ls.end());
    return ls;
    
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      vector<int> res =PrintDivisor(num);
    
    //   for(auto it=res.begin();it!=res.end();it++){
    //     if(it!=res.end()){
    //         cout<<*it;
    //         if(it==res.end()-1){
    //             cout<<"";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     }
    //   cout<<"]"<<endl;
    cout << "[";
    for (auto i = 0; i < res.size(); ++i) {  // `auto` deduces the type of `i` as `size_t`
        cout << res[i];
        if (i != res.size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;   
}

}