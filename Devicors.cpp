vector<ll> devicors(ll x){
    vector<ll>v;
    ll i=1;
    for (;i*i<x;i++){
        if (x%i==0) {
            v.push_back(i);
            v.push_back(x/i);
        }
    }
    if(i*i==x)v.push_back(i);
    return v;
}
