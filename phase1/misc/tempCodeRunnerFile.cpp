map<long long, long long> mapHashing(vector<int> &v)
{
    map<long long, long long> m(v.size(), 0);
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
}
int main()
{
    int n;
    cout << "enter number of elements and elements" << endl;
    cin >> n;
    vector<char> a(n, 0);
    // vector<int> v(256, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // map hashing:
    map<long long, long long> mapp;
    int times;
    int num;
    cout << "how many characters you wanna search for?:";
    cin >> times;
    while (times--)
    {
        cout << "enter num you'd like to search for" << endl;
        cin >> num;
        mapp = mapHashing(a);
        cout << num << " appears " << mapp[num] << " times" << endl;
    }